#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *root=NULL;




void InsertFirst(int val)
{
    node *temp=new node;
    temp->data=val;
    temp->next=root;
    root=temp;
}


void InsertLast(int val)
{
    node *temp=new node;
    temp->data=val;
    node *curr_node=root;
    while(curr_node->next!=NULL)
    {
        curr_node=curr_node->next;
    }
    curr_node->next=temp;
    temp->next=NULL;
}

void deleteFirst()
{
    if(root !=NULL)
    {
        root=root->next;
    }
}
void printing()
{
    node *curr_node = root;
    while (curr_node != NULL)
    {
        cout << curr_node->data << " ";
        curr_node = curr_node->next;
    }
    cout << endl;
}

void printFirst()
{
    node *curr_node=new node;
    cout<<curr_node->data<<" "<<endl;
}

void printLast()
{
    node *curr_node=root;
    while(curr_node->next!=NULL)
    {
        curr_node=curr_node->next;
    }
    cout<<curr_node->data<<endl;
}

int main()
{
    InsertFirst(30);
    printing();
    InsertLast(20);
    printing();
    deleteFirst();
    printing();

    return 0;
}
