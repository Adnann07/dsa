#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *root=NULL;
void insertFirst(int val)
{
    node *temp=new node;
    temp->data=val;
    temp->next=root;
    root=temp;
}

void insertLast(int val)
{
    node *curr_node=root;
    node *temp=new node;
    temp->data=val;
    temp->next=NULL;
    while(curr_node->next!=NULL)
    {
        curr_node=curr_node->next;
    }
    curr_node->next=temp;
    temp->next=NULL;
}

void deleteLast()
{
    node *curr_node=root;
    node *prev_node;
    while(curr_node->next!=NULL)
    {
        prev_node=curr_node;
        curr_node=curr_node->next;
    }

    prev_node->next=NULL;
}
void print2ndLast()
{
    node *curr_node=root;
    node *prev_node;
    while(curr_node->next!=NULL)
    {
        prev_node=curr_node;
        curr_node=curr_node->next;
    }
    cout<<prev_node->data<<" ";
}

void printing()
{
    node *curr_node=root;
    while(curr_node!=NULL)
    {
        cout<<curr_node->data<<" ";
        curr_node=curr_node->next;
    }
    cout<<endl;
}


void deletebyValue(int val)
{
    if(root->data==val)
    {
        root=root->next;
    }

    node *curr_node=root;
    node *prev_node=NULL;
    while(curr_node->next!=NULL && curr_node->data!=val)
    {
        prev_node=curr_node;
        curr_node=curr_node->next;
    }
    prev_node->next=curr_node->next;
    delete curr_node;
}

int main()
{
    insertFirst(10);
    insertFirst(20);
    insertFirst(30);
    insertFirst(40);
    insertFirst(10);
    insertFirst(20);
    insertFirst(30);
    insertFirst(40);

    printing();  // Output: 40 30 20 10

    deletebyValue(30);
    printing();  // Output: 40 20 10

    deletebyValue(40);
    printing();  // Output: 20 10

    deletebyValue(50);  // Value not in the list
    printing();  // Output: 20 10

    return 0;
}
