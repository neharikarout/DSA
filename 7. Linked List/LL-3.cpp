#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1 , Node* next1 , Node* back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1 ;i<arr.size() ; i++)
    {
        Node* temp = new Node(arr[i] , nullptr , prev);
        prev->next = temp;
        prev = temp;  
    }
    return head;
}

void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
   }
}


Node* insertBeforeHead(Node* head, int val)
{
    Node* newHead = new Node(val , head , nullptr);
    head->back = newHead;
    newHead->next = head;

    return newHead;
}

Node* insertAfterHead(Node* head , int val)
{
    Node* temp = new Node(val , head->next , head);
    head->next = temp;
    temp->next->back = temp;

    return head;
}

Node* insertBeforeTail(Node* head , int val)
{
    if(head->next == NULL) 
    {
        return insertBeforeHead(head,val);
    }
    Node* tail = head;
    while(tail->next != NULL)
    {
        tail = tail->next;
    }
    Node* prev = tail->back;
    Node* newNode = new Node(val, tail , prev);
    prev->next = newNode;
    tail->back = newNode;

    return head;
}

Node* insertAfterTail(Node* head , int val)
{
    if(head->next == NULL)
    {
        return insertAfterHead(head,val);
    }
    Node* tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node* prev = tail->back;
    Node* newTail = new Node(val , nullptr , prev);
    tail->next = newTail;

    return head;
    
}

Node* insertBeforeK(Node* head , int val , int k)
{
    if(k==1) {
        return insertBeforeHead(head , val);
    }

    Node* temp = head; int cnt=0;
    while(temp != NULL)
    {
        cnt++;
        if(cnt==k) break;
        temp= temp->next;
    }

    Node* prev = temp->back;
    Node* newNode = new Node(val, temp, prev);
    temp->back = newNode;
    prev->next = newNode;

    return head;
}

Node* insertAfterK(Node* head , int val , int k)
{
    if(k==1) {
        return insertAfterHead(head , val);
    }

    Node* temp = head; int cnt=0;
    while(temp != NULL)
    {
        cnt++;
        if(cnt==k) break;
        temp= temp->next;
    }

    Node* front = temp->next;
    Node* newNode = new Node(val, front, temp);
    temp->next = newNode;
    front->back = newNode;

    return head;
}

void insertBeforeNode(Node* node , int val)
{
    Node* prev = node->back;
    Node* newNode = new Node(val , node , prev);

    prev->next = newNode;
    node->back = newNode;
}


int main()
{
     vector<int> arr = {12,5,8,7};
    Node* head = convertArr2DLL(arr);
    print(head);
    cout<<endl;
    // head = insertBeforeHead(head,10);
    // print(head);
    // cout<<endl;
    // head = insertAfterHead(head,20);
    // print(head);
    // cout<<endl;

    // head = insertBeforeTail(head,20);
    // head = insertAfterTail(head,20);

    // head = insertBeforeK(head,100,2);
    // head = insertAfterK(head,100,2);

    insertBeforeNode(head->next->next , 100);
    print(head);
    cout<<endl;

}