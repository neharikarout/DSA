#include<bits/stdc++.h>
using namespace std;

 class Node {
 public:
      int data;
      Node *next;
 
     Node(int data) {
         this->data = data;
          this->next = NULL;
     }
};



//                         ADD 1 TO LL

int helper(Node* temp){
    if(temp == NULL) return 1;

    int carry = helper(temp->next);
    temp->data = temp->data + carry;

    if(temp->data < 10) return 0;
    temp->data = 0;
    return 1;
}
Node *addOne(Node *head)
{
    int carry = helper(head);
    if(carry == 1){
        Node* newNode = new Node(1);
        newNode->next = head;
        return newNode;
    }
    return head;
}



//                   DETECT A LOOP IN LL

 bool hasCycle(Node *head) {
        	Node* slow = head ; Node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) return true;
    }
    return false;
        
    }


//                    FIND LENGTH OF THE LOOP

int findLength(Node* slow, Node* fast)
{
    int cnt= 1; fast = fast->next;
    while(fast != slow){
        fast = fast->next;
        cnt++;
    }
    return cnt;
}

int lengthOfLoop(Node *head) {
   Node* slow = head ; Node* fast = head; 
   while(fast != NULL && fast->next != NULL){
       slow = slow->next;
       fast = fast->next->next;
       
       if(slow == fast) return findLength(slow, fast);
   }
   return 0;
}


//               DELETE MIDDLE NODE
 Node* deleteMiddle(Node* head) {
    if(head == NULL || head->next == NULL) return NULL;
    Node* slow = head ;
    Node* fast = head;
    // skip 1 step of slow and move fast
    fast = head->next->next;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* middle = slow->next;
    slow->next = slow->next->next;
    delete middle;

    return head;   
    }  