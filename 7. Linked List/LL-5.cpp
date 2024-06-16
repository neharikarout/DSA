#include<bits/stdc++.h>
using namespace std;


 //Definition for singly-linked list.
 struct ListNode {
    int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 

 // segregate odd and even links
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if(head == NULL || head->next == NULL) return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = head->next;
        while(even != NULL && even->next != NULL)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;
        }
        odd->next = evenHead;

        return head;
    }
};


// sort 0s and 1s

//Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

Node* sortList(Node *head){
    // Write your code here.
//edge case
if(head == NULL || head->next == NULL) return head;

Node* zeroHead = new Node(-1);
Node* oneHead = new Node(-1);
Node* twoHead = new Node(-1);

Node* zero = zeroHead;
Node* one = oneHead;
Node* two = twoHead;

Node* temp = head;

while(temp!= NULL){
    if(temp->data == 0){
        zero->next = temp;
        zero = temp;
    }
    else if(temp->data == 1){
        one->next = temp;
        one = temp;
    }
    else{
        two->next = temp;
        two = temp;
    }

    temp = temp->next;
}

zero->next = (oneHead->next)?oneHead->next:twoHead->next;
one->next = twoHead->next;
two->next = NULL;

Node* newHead = zeroHead->next;

delete zeroHead,oneHead,twoHead;

return newHead;























}