#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(){
       this->data=0;
       this->next = NULL;
    }
    
    Node(int data) {
       this->data=data;
       this->next = NULL;
    }
};

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
}

void insertAtHead(Node* &head, Node* &tail, int data){
    // step first:- create node
    Node* newNode = new Node(data);
    // step second:- point newNode to next head
    newNode->next = head;
    // step third:- update head
    head = newNode;
}

void insertAtTail(Node* &head, Node* &tail, int data){
    // step first:- create node
    Node* newNode = new Node(data);
    // step second:- point head to tail node
    tail->next = newNode;
    // update tail node

    tail = newNode;
}


int main(){
   
//   Node* first = new Node(10);
//   Node* second = new Node(20);
//   Node* third = new Node(30);
   
//   first->next= second;
//   second->next = third;
  
  
  
  // this node is allready created 
  Node* head = NULL;
  Node* tail = NULL;
  insertAtHead(head,tail, 20);
  insertAtHead(head,tail, 30);
  insertAtHead(head,tail, 40);
  insertAtHead(head,tail, 50);
  insertAtTail(head,tail,1003);
    
   
//   print(first);
   
  print(head);

// Node* head = new Node(10);


   
    
   return 0;
}