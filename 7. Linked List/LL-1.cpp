#include<bits/stdc++.h>
using namespace std;

// struct Node : no OOP concepts so use class
class Node
{
    public:
    int data;
    Node* next;

    public:
    Node(int data1 , Node* next1) // constructor
    {
        data = data1;
        next = next1;
    }
     Node(int data1 )
    {
        data = data1;
    }

};

Node* convertArr2LL(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp; // connect current node with next new temp node
        mover = temp;// move mover to the temp
        // as mover next has temp address we can write like this too
        // mover = mover->next;
    }
    return head;
}

int lengthOfLL(Node* head)
{
    int cnt=0;
    Node* temp = head;
    while(temp)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

Node* removeHead(Node* head)
{
    if(head==NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* removeTail(Node* head)
{
    if(head == NULL || head->next == NULL) return NULL;

    Node* temp = head;
    while(temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;

    return head;
}

Node* removeK(Node* head, int k)
{
    if(head == NULL) return NULL;
    if(k==1) {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    int cnt= 0; Node* temp = head; Node* prev = NULL;

    while(temp != nullptr)
    {
        cnt++;
        if(cnt == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;

        return head;
    }

}


Node* insertHead(Node* head, int val)
{
    Node* temp = new Node(val,head);
    return temp;
}

Node* insertAtLast(Node* head , int val)
{
    if(head == NULL) return new Node(val,head);
    Node* el = new Node(val , nullptr);
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = el;

    return head;
}

Node* insertAtK(Node* head , int val , int k)
{
    if(head == NULL)
    {
        if(k == 1) return new Node(val);
        else return NULL;
    }
    if(k==1)
    {
        Node* temp = new Node(val , head);
        return temp;
    }
    int cnt = 0 ; Node* temp = head;
    while(temp != NULL)
    {
        cnt++;
        if(cnt == (k-1))
        {
            Node* x = new Node(val , temp->next);
            // x-> next = temp->next;
            temp->next = x;
            break; 
        }
        temp = temp->next;
    }
     return head;   
}


Node* insertBeforeval(Node* head , int el , int val)
{
    if(head == NULL)
    {
        return NULL;
    }
    if(head->data == val)
    {
        Node* temp = new Node(el , head);
        return temp;
    }
    Node* temp = head;
    while(temp->next != NULL)
    {
        if(temp->next->data == val)
        {
            Node* x = new Node(el , temp->next);
            // x-> next = temp->next;
            temp->next = x;
            break; 
        }
        temp = temp->next;
    }
     return head;   
}
int main()
{
    vector<int> arr = {2,5,8,7};
    // Node* y = new Node(arr[0], nullptr);
    // cout<<y;

    // Node y =  Node(arr[0], nullptr);
    // cout<<y.data << " " << y.next; // object

    // Node* y = new Node(arr[0], nullptr);
    // cout<<y->data <<" " << y->next;

    // Node* n = new Node(arr[0]); // will call constructor with one parameter


    Node* head = convertArr2LL(arr);
    // // cout<<head->data;


    // Node* temp = head;
    // while(temp)
    // {
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }
    
    // head = removeHead(head);
    // cout<<head->data;

    head = removeTail(head);


}
