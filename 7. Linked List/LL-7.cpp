#include<bits/stdc++.h>


// medium problems of DLL

// delete all occurences of key in dll

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
 


Node * deleteAllOccurrences(Node* head, int k) {
    Node* temp = head;

    while(temp != NULL){
        if(temp->data == k)
        {
            if(temp == head){
                head = temp->next;
            }

            Node* nextNode = temp->next;
            Node* prevNode = temp->prev;

            if(prevNode != NULL) prevNode->next = nextNode;
            if(nextNode != NULL) nextNode->prev = prevNode;

            free(temp);

            temp = nextNode;
        } else {

            temp = temp->next;
        }
    }

    return head;
}


// find pairs in dll with given sum

Node* findTail(Node* head)
{
    Node* tail = head;
    while(tail->next != NULL) tail = tail->next;

    return tail;
}

// vector<pair<int, int>> findPairs(Node* head, int k)
// {
//     vector<pair<int,int>> ans;

//     if(head == NULL) return ans;

//     Node* left = head;
//     Node* right = findTail(head);

//     while(left->data < right->data)
//     {
//         if(left->data + right->data == k){
//           ans.push_back({left->data, right->data});
//           left = left->next;
//           right = right->prev;
//         }
//         else if(left->data + right->data > k) right = right->prev;
//         else left = left->next;
//     }

//     return ans;
// }



//        REMOVE DUPLICATES FROM A SORTED DLL

Node * removeDuplicates(Node *head)
{
    // Write your code here
    Node* temp = head;
    while(temp != NULL && temp->next != NULL){
        Node* nextNode = temp->next;

        while(nextNode != NULL && nextNode->data == temp->data)
        {
            nextNode = nextNode->next;
        }

        temp->next = nextNode;
        if(nextNode) nextNode->prev = temp;

        temp = temp->next;
    }

    return head;
}