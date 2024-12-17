#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next=nullptr;
};

void printLinkedList(node* head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<endl;
        head= head->next;
    }
}

void printAtLast(node* h)
{

}

int main()
{
    node* head = nullptr;
    head = new node;

    head->data=10;
    cout<< head->data<<endl;

    head->next=new node;
    cout<<head->next<<endl;

    head->next->data=20;
    cout<<head->next->data<<endl;

    head->next->next=new node;
    head->next->next->data=30;

    cout<<head->next->next->data<<endl;

    head->next->next->next=new node;
    head->next->next->next->data=40;

    cout<<head->next->next->next->data<<endl<<endl<<endl<<endl;

    printLinkedList(head);








}
