#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertionAtHead(Node *head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print(Node* head){
    
}

int main()
{
    Node *first = new Node(3);
    Node *head = first;
    insertionAtHead(head, 7);
    insertionAtHead(head, 5);
    insertionAtHead(head, 3);
    return 0;
}