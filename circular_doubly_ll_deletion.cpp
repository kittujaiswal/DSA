#include<iostream>

using namespace std;

class Node {
    public: int data;
    Node * prev;
    Node * next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

void printList(Node * head) {
    if (head == nullptr) return;

    Node * temp = head;
    do {
        cout << temp -> data << " ";
        temp = temp -> next;
    } while (temp != head);

    cout << endl;
}

int main() {

    Node * head = new Node(10);
    Node * second = new Node(20);
    Node * third = new Node(30);
    Node * fourth = new Node(40);

    head -> next = second;
    second -> prev = head;

    second -> next = third;
    third -> prev = second;

    third -> next = fourth;
    fourth -> prev = third;

    fourth -> next = head;
    head -> prev = fourth;

    cout << "Original List: ";
    printList(head);

    Node * last = head -> prev;
    Node * temp = head;

    head = head -> next;
    last -> next = head;
    head -> prev = last;
    delete temp;

    cout << "After Delete First: ";
    printList(head);

    last = head -> prev;
    Node * newLast = last -> prev;

    newLast -> next = head;
    head -> prev = newLast;
    delete last;

    cout << "After Delete Last: ";
    printList(head);

    int pos = 2;
    Node * curr = head;
    int count = 1;

    while (count < pos) {
        curr = curr -> next;
        count++;
    }

    curr -> prev -> next = curr -> next;
    curr -> next -> prev = curr -> prev;
    delete curr;

    cout << "After Delete Position 2: ";
    printList(head);

    return 0;
}