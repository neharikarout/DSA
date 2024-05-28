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


// Add two numbers in LL

Node *addTwoNumbers(Node *num1, Node *num2)
{
     Node* t1 = num1;
    Node* t2 = num2;
    Node* dummyNode = new Node(-1);
    Node* curr = dummyNode;
    int carry = 0;

    while(t1!=NULL || t2!=NULL)
    {
        int sum = carry;
        if(t1) sum += t1->data;
        if(t2) sum +=t2->data;

        Node* newNode = new Node(sum%10);
        carry = sum/10;

        curr->next = newNode;
        curr = curr->next;

        if(t1) t1 = t1->next;
        if(t2) t2 = t2->next;

        if (carry) {
          Node* newNode = new Node(carry);
          curr->next = newNode;
        }
    }

        return dummyNode->next; // head of new LL
}

int main()
{
    vector<int> arr = {4,3,2,1};

    Node* head = convertArrtoDLL(arr);

    // head = reverseDLL(head);
    head = ReverseBySwappingLinks(head);

    printDLL(head);

}