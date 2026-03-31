#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

void printList(Node* head){
    if(head == nullptr) return;

    Node* temp = head;
    do{
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != head);

    cout << endl;
}

int main(){

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    Node* last = head->next->next->next;
    last->next = head;   // making circular

    cout << "Original List: ";
    printList(head);

    Node* temp = head;

   
    // Node* tail = head;
    // while(tail->next != head){
    //     tail = tail->next;
    // }
    // head = head->next;      
    // tail->next = head;      
    // delete temp;

    // cout << "After Deleting First: ";
    // printList(head);

    // Node* curr = head;
    // Node* prev = nullptr;

    // while(curr->next != head){
    //     prev = curr;
    //     curr = curr->next;
    // }

    // prev->next = head;   
    // delete curr;

    // cout << "After Deleting Last: ";
    // printList(head);


    
    // int pos = 3;
    // Node* current = head;
    // Node* previous = nullptr;
    // int count = 1;

    // while(count < pos){
    //     previous = current;
    //     current = current->next;
    //     count++;
    // }

    // previous->next = current->next;
    // delete current;

    // cout << "After Deleting Position 3: ";
    // printList(head);

    return 0;
}