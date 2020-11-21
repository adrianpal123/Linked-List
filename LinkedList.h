#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

class LinkedList
{
private:
    struct Node
    {
        int data;
        Node* next=NULL;
    };

    Node* head=NULL;
    Node* createNode(int );

public:
    LinkedList();
    virtual ~LinkedList();

    void addNodeAtEnd(int value);
    void AddNodeAtBeginning(int value);
    void print();
    void removeNode(int value);




};

#endif // LINKEDLIST_H
