#include<bits/stdc++.h>


// hard problems of ll

class Node {
  public:
       int data;
       Node *prev;
       Node *next;
       Node() {
           this->data = 0;
           this->prev = NULL;
           this->next = NULL;
       }
       Node(int data) {
           this->data = data;
           this->prev = NULL;
           this->next = NULL;
       }
       Node (int data, Node *next, Node *prev) {
           this->data = data;
           this->prev = prev;
           this->next = next;
       }
  };



  
// ListNode* reverseLinkedList(ListNode *head)
// {

//    ListNode* temp = head;  
//    ListNode* prev = NULL;  
   
//    while(temp != NULL){  

//        ListNode* front = temp->next;  
//        temp->next = prev;  
       
//        prev = temp;  

//        temp = front; 
//    }
   
//    return prev;  
// }


// ListNode* getKthNode(ListNode* temp, int k){

//     k -= 1; 

//     while(temp != NULL && k > 0){
//         k--; 

//         temp = temp -> next; 
//     }
    
//     return temp; 
// }

    // ListNode* reverseKGroup(ListNode* head, int k) {

    // ListNode* temp = head; 

    // ListNode* prevLast = NULL; 
    

    // while(temp != NULL){

    //     ListNode* kThNode = getKthNode(temp, k); 


    //     if(kThNode == NULL){
    //         if(prevLast){
    //             prevLast -> next = temp; 
    //         }
            
    //         break; 
    //     }
        

    //     ListNode* nextNode = kThNode -> next; 

    //     kThNode -> next = NULL; 


    //     reverseLinkedList(temp); 

    //     if(temp == head){
    //         head = kThNode;
    //     }else{

    //         prevLast -> next = kThNode; 
    //     }

    //     prevLast = temp; 

    //     temp = nextNode; 
    // }

    // return head;  
    // }













    // ROTATE BY K STEPS

    
Node *rotate(Node *head, int k) {
        if(head == NULL||head->next == NULL||k == 0) return head;
    //calculating length
    Node* temp = head;
    int length = 1;
    while(temp->next != NULL) {
        ++length;
        temp = temp->next;
    }
    //link last node to first node
    temp->next = head;
    k = k%length; //when k is more than length of list
    int end = length-k; //to get end of the list
    while(end--) temp = temp->next;
    //breaking last node link and pointing to NULL
    head = temp->next;
    temp->next = NULL;
        
    return head;
}



//  FLATTENNING OF A LL

// Node* merge(Node* list1 , Node* list2){
// Node* dummyNode = new Node(-1);
// Node* res = dummyNode;

// while(list1 != NULL && list2 != NULL){
// 	if(list1->data < list2->data)
// 	{
// 		res->child = list1;
// 		res = list1;
// 		list1 = list1->child;
// 	}
// 	else{
// 		res->child = list2;
// 		res = list2;
// 		list2 = list2->child;
// 	}
// 	res->next = NULL;
// }

// if(list1) res->child = list1;
// else res->child = list2;

// return dummyNode->child;	
// }

// Node* flattenLinkedList(Node* head) 
// {	
// 	if(head==NULL || head->next==NULL){
// 		return head;
// 	}
	
// 	Node* mergedHead = flattenLinkedList(head->next);

// 	return merge(head, mergedHead);
// }

