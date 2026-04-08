#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int new_data){
        this->data = new_data;
        this->next = nullptr;
    }
};
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    Node* last = head->next->next->next;
    last->next = head;
    
    // Node* nn = new Node(5);
    // nn->next = head;
    // head = nn;
    // last->next = head;
    
    // Node* nn = new Node(50);
    // Node* tem = head;
    // while(tem < last){
    //     tem = tem->next;
    // }
    // tem->next = nn;
    // nn->next = head;
    
    // int pos = 3;
    // Node* tem = head;
    // Node* nn = new Node(25);
    // int count = 1;
    // while(count < pos-1 && tem!= nullptr){
    //     tem = tem->next;
    //     count++;
    // }
    // nn->next = tem->next;
    // tem->next = nn;
    
    Node* temp = head;
    if(temp != nullptr){
     do{
        cout << temp->data << " ";
        temp = temp->next;
     }while(temp != head);
}
}