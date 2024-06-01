#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int num)
    {
        data = num;
        next = nullptr;
    }
};

void insertatlast(Node* &head, Node* n){
    if(head ==nullptr){
        head = n;
        return;
    }
    Node *curr = head;
    while(curr->next !=nullptr){
        curr = curr->next;
    }

    curr->next = n;
}

int main()
{
    Node *head = nullptr;
    Node *first = new Node(15);
    Node *sec = new Node(145);
    Node *third = new Node(15);
    Node *four = new Node(5);
    Node *five = new Node(1);
    Node *six = new Node(133);

    insertatlast(head, first);
    insertatlast(head, sec);
    insertatlast(head, third);
    insertatlast(head, four);
    insertatlast(head, five);
    insertatlast(head, six);

    Node *current = head;
    while (current != nullptr){
        cout << current->data<<" ";
        current = current->next;
    }

    current = head;
    Node* temp;
        while (current != nullptr) {
            temp = current->next;
            delete current;
            current = temp;
        }
    head == nullptr;

    return 0;
}