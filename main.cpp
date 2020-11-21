#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList* lista=new LinkedList();

    lista->addNodeAtEnd(3);
    lista->addNodeAtEnd(7);
    lista->addNodeAtEnd(9);
    lista->addNodeAtEnd(1);
    lista->AddNodeAtBeginning(0);

    lista->print();

    //stergem nodul 3;
    cout<<endl;

    lista->removeNode(3);
    cout<<endl;
    lista->print();
}
