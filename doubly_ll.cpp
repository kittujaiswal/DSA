#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    
    Node(int new_data){
        this->data = new_data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = new Node(30);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(40);
    head->next->next->next->prev = head->next->next;
    
    // Node* curr = head;
    // head = new Node(5);
    // head->next = curr;
    
    // Node* curr = head;
    // while(curr->next!=nullptr){
    //     curr = curr->next;
    // }
    // Node* nn = new Node(50);
    // nn->prev = curr;
    // nn->next = curr->next;
    // curr->next = nn;
    
    int pos = 3;
Node* curr = head;
Node* n = new Node(25);
int count = 1;

while(count < pos-1 && curr != nullptr){
    curr = curr->next;
    count++;
}

if(curr == nullptr){
    cout << "Position out of range";
    return 0;
}
n->next = curr->next;
n->prev = curr;

if(curr->next != nullptr){
    curr->next->prev = n;
}

curr->next = n;
    
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data;
        if (temp->next != nullptr) {
            cout << " <-> ";
        }
        temp = temp->next;
    }
}