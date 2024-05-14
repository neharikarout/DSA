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

Node* deleteHead(Node* head)
{
    if(head == NULL || head->next == NULL) return NULL;

    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;

    return head;
}

Node* deleteTail(Node* head)
{
    Node* tail = head;
    while(tail->next != NULL)
    {
        tail = tail->next;
    }
    Node* prev = tail-> back;
    prev->next = nullptr;
    tail->back = nullptr;
    delete tail;

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

Node* deleteKthEl(Node* head , int k)
{
    if(head == NULL) return NULL;

    int cnt = 0;
    Node* temp = head;
    while(temp->next != NULL)
    {
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }

    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev == NULL && front == NULL)
    {
        return NULL;
    }
    else if(prev == NULL)
    {
        // delete head
        return deleteHead(head);
    }
    else if(front == NULL)
    {
        //delete tail
        return deleteTail(head);
    }
    

    prev->next = front;
    front->back = prev;

    temp->next = nullptr;
    temp->back = nullptr;

    delete temp;

    return head;
}

void deleteNode(Node* temp)
{
    Node* prev = temp->back;
    Node* front = temp->next;

    if(front == NULL)
    {
        prev->next = nullptr;
        temp->back = prev;
        free(temp);
    }

    prev->next = front;
    front->back = prev;


    temp->next = temp->back = nullptr;
    free(temp);
}


int main()
{
    vector<int> arr = {12,5,8,7};
    Node* head = convertArr2DLL(arr);
    print(head);
    // head = deleteHead(head);
    // print(head);

    // head = deleteTail(head);
    // print(head);

    // head = deleteKthEl(head , 1);
    // print(head);

    // deleteNode(head->next->next);
    // print(head);
}