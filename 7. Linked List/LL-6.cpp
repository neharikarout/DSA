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



//                FIND INTERSECTION POINT
// BETTER SOLUTION
int lengthLL(Node* head){
  int cnt = 0;
  Node* temp = head;
  while(temp != NULL){
      cnt++;
      temp = temp->next;
  }
  return cnt;
}

Node* findIntersection(Node* firstHead ,Node* secondHead, int N1,int N2){
    int d = N1-N2;
      Node* temp1 = firstHead;
      while(d){
          d--;
          temp1=temp1->next;
      }

      Node* temp2 = secondHead;
      while(temp1 != NULL && temp2 != NULL){
          
          if(temp1 == temp2){
              return temp1;
          }
          temp1=temp1->next;
          temp2=temp2->next;
      }
      return NULL;
}

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    int N1 = lengthLL(firstHead);
    int N2 = lengthLL(secondHead);

   if(N1>N2) {
       return findIntersection(firstHead,secondHead, N1,N2);

   }
   else{
       return findIntersection(secondHead,firstHead,N2,N1);
   }

return NULL;
}



// OPTIMAL
Node *getIntersectionNode(Node *headA, Node *headB) {
if(headA == NULL || headB == NULL) return NULL;
Node* temp1 = headA;
Node* temp2 = headB;
while(temp1 != temp2){
    temp1 = temp1->next;
    temp2 = temp2->next;

    if(temp1 == temp2) return temp1;

    if(temp1 == NULL) temp1 = headB;
    if(temp2 == NULL) temp2 = headA;
}
return temp1; // if head is the intersection point

}