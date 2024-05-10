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

int main()
{
    vector<int> arr = {2,5,8,7};
    // Node* y = new Node(arr[0], nullptr);
    // cout<<y;

    // Node y =  Node(arr[0], nullptr);
    // cout<<y.data << " " << y.next; // object

    Node* y = new Node(arr[0], nullptr);
    cout<<y->data <<" " << y->next;

    Node* n = new Node(arr[0]); // will call constructor with one parameter



}
