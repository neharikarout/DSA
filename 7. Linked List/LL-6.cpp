#include<bits/stdc++.h>
using namespace std;


//                         ADD 1 TO LL

// int helper(Node* temp){
//     if(temp == NULL) return 1;

//     int carry = helper(temp->next);
//     temp->data = temp->data + carry;

//     if(temp->data < 10) return 0;
//     temp->data = 0;
//     return 1;
// }
// Node *addOne(Node *head)
// {
//     int carry = helper(head);
//     if(carry == 1){
//         Node* newNode = new Node(1);
//         newNode->next = head;
//         return newNode;
//     }
//     return head;
// }



//                   DETECT A LOOP IN LL

//  bool hasCycle(ListNode *head) {
//         	ListNode* slow = head ; ListNode* fast = head;

//     while(fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;

//         if(slow == fast) return true;
//     }
//     return false;
        
//     }
