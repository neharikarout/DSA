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
    // cout<<head->data;


    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    


}
