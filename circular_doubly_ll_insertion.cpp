#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = nullptr;
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
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    fourth->next = head;
    head->prev = fourth;

    cout << "Original List: ";
    printList(head);

    Node* nn1 = new Node(5);
    Node* last = head->prev;

    nn1->next = head;
    nn1->prev = last;

    last->next = nn1;
    head->prev = nn1;

    head = nn1;

    cout << "After Insert at Beginning: ";
    printList(head);

    Node* nn2 = new Node(50);
    last = head->prev;

    nn2->next = head;
    nn2->prev = last;

    last->next = nn2;
    head->prev = nn2;

    cout << "After Insert at End: ";
    printList(head);

    int pos = 3;
    Node* temp = head;
    int count = 1;

    while(count < pos - 1){
        temp = temp->next;
        count++;
    }

    Node* nn3 = new Node(25);

    nn3->next = temp->next;
    nn3->prev = temp;

    temp->next->prev = nn3;
    temp->next = nn3;

    cout << "After Insert at Position 3: ";
    printList(head);

    return 0;
}