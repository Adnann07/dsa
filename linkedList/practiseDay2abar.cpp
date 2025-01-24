
#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *next;
};
node *root=NULL;

void printing()
{
    node *curr_node=root;
    while(curr_node!=NULL)
    {
        cout<<curr_node->data<<" ";
        curr_node=curr_node->next;
    }

}

void insertFirst(int val)
{
    node *temp=new node;
    temp->data=val;
    temp->next=root;
    root=temp;
}

void insertLast(int val)
{
    node *temp=new node;
    node *curr_node=root;
    while(curr_node->next!=NULL)
    {
        curr_node=curr_node->next;
    }
    curr_node->next=temp;
    temp->next=NULL;
}

void printLast()
{
    node *curr_node=root;
    while(curr_node->next!=NULL)
    {
        curr_node=curr_node->next;
    }
    cout<<curr_node->data<<" ";
}

void printSecondLast()
{
    node *curr_node=root;
    node *prev_node=NULL;
    while(curr_node->next!=NULL)
    {

        prev_node=curr_node;
        curr_node=curr_node->next;
    }
     cout<<prev_node->data<<endl;
}

int sizeofList()
{
    node *curr_node=root;
    int s=1;
    while(curr_node->next!=NULL)
    {

        curr_node=curr_node->next;
        s++;
    }
    return s;
}

int arrayofList()
{
    node *curr_node=root;
    int c=1;
    while(curr_node->next!=NULL)
    {
        c++;
        curr_node=curr_node->next;

    }
    return c;
}

void searching(int val)
{
    node *curr_node=root;
    while(curr_node!=NULL)
    {
        if(curr_node->data==val)
        {
            cout<<val<<" is found"<<endl;
            break;
        }
        curr_node=curr_node->next;
    }
    cout<<val<<" not found"<<endl;
}

void deleteFirst()
{
    if(root->next!=NULL)
    {
        root=root->next;
    }
}

void deleteLast()
{
    node *curr_node=root;
    node *prev_node=NULL;
    while(curr_node->next!=NULL)
    {
        prev_node=curr_node;
        curr_node=curr_node->next;
    }
    prev_node->next=NULL;
}

void reversePrint(node *curr_node)
{
    if(curr_node->next!=NULL)
    {
        reversePrint(curr_node->next);
        cout<<curr_node->data<<" ";
    }
}

void deletebyPosition(int loc)
{
    if(loc==1)
    {
        if(root->next!=NULL)
        {
            root=root->next;
        }
    }
    node *curr_node=root;
    node *prev_node=NULL;
    int counter=1;
    while(curr_node->next!=NULL && counter<loc)
    {
        prev_node=curr_node;
        curr_node=curr_node->next;
        counter++;
    }
    prev_node->next=curr_node->next;
}

void deletebyValue(int val)
{
    node *curr_node=root;
    node *prev_node=NULL;
    while(curr_node->next!=NULL && curr_node->data!=val)
    {
        prev_node=curr_node;
        curr_node=curr_node->next;
    }
    prev_node->next=curr_node->next;
}
