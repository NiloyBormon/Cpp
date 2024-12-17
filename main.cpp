#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next = nullptr;

};

void printLinkedList(Node* h)
{

    while(h != nullptr)
    {
        cout<< h->data<<endl;
        h = h->next;
    }
}



int main()
{
    Node* head = nullptr;
    head = new Node;
    head -> data = 10;
    cout<<head->data<<endl;


    int n;
    cout<< "enter a value : ";
    cin>> n;
    while(n > 0)
    {

        head->next = new Node;
        head->next->data = n;

        cout<< "enter a value : ";
        cin>>n;

    }

    cout<<endl;
    cout<<endl;
    cout<<"Printed result of a Linked List : "<<endl;

    printLinkedList(head );

}
