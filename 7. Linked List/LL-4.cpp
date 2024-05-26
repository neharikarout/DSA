#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }

    public:
    Node(int data1, Node* next1 , Node* prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }
};

void printDLL(Node* head)
{
     while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
   }
}

Node* convertArrtoDLL(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* back = head;

    for(int i = 1 ; i<arr.size() ; i++)
    {
        Node* temp = new Node(arr[i], nullptr, back);
        back->next = temp;
        back = temp;
    }

    return head;


}


// Reverse a DLL

//Brute force : swapping data
Node* reverseDLL(Node* head)
{
    //first pass
    Node* temp = head;
    stack<int> st;
    while(temp != NULL)
    {
        st.push(temp->data);
        temp = temp->next;
    }

    // second pass
    temp = head;
    while(temp != NULL)
    {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }

    return head;
}


// better approach : swap links
Node* ReverseBySwappingLinks(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    Node* last = NULL;
    Node* current = head;

    while(current != NULL)
    {
        // swapping
        last = current->prev;
        current->prev = current->next ;
        current->next = last;

        // move to next node
        current = current->prev;
    }

    // new head
    return last->prev;
}
int main()
{
    vector<int> arr = {4,3,2,1};

    Node* head = convertArrtoDLL(arr);

    // head = reverseDLL(head);
    head = ReverseBySwappingLinks(head);

    printDLL(head);

}