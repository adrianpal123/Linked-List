#include "LinkedList.h"

LinkedList::LinkedList()
{
    this->head=NULL;
}

LinkedList::~LinkedList()
{
    //dtor
}

LinkedList::Node* LinkedList::createNode(int value)
{
    Node* n=new Node();
    n->data=value;
    n->next=NULL;

    return n;
}

void LinkedList::addNodeAtEnd(int value)
{
    if (this->head==NULL)
        this->head=createNode(value);
    else
    {

    Node* current_node=this->head;

    while (current_node->next!=NULL)
    {
        current_node=current_node->next;
    }
    current_node->next=createNode(value);

    }

}


void LinkedList::print()
{
    Node* current_node=this->head;

     while (current_node->next!=NULL)
    {
        cout<<current_node->data<< " ";
        current_node=current_node->next;
    }
    cout<<current_node->data;

}

void LinkedList::removeNode(int value)
{
    if (this->head==NULL)
        cout<<"Nu putem sterge niciun nod deorece nu avem niciun nod in lista";
    else
    {
        int ok=0;
        Node* current_node=this->head;
        Node* prev_node=NULL;

        int ok1=0;
        if (current_node->data==value)
        {
            this->head=this->head->next;
            ok1=1;
        }

        if (ok1==0)
        {

        while (current_node->next!=NULL)
        {
            prev_node=current_node;

            if (current_node->next->data==value)
            {
                ok=1;
                break;

            }
            current_node=current_node->next;
        }

        if (ok==0)
            cout<<"Nu am gasit nodul cautat in lista";
        else
        {
            prev_node->next=current_node->next->next;
        }

        }

    }

}

void LinkedList::AddNodeAtBeginning(int value)
{
    Node* newNode=createNode(value);
    newNode->next=this->head;
    this->head=newNode;
}
