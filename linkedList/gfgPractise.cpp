
#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *next;
};
node *root;


void insertFirst(int val)
{
    node *temp=new node;
    temp->data=val;
    temp->next=root;
    root=temp;
}

void insertEnd(int val)
{
    node *temp=new node;
    temp->data=NULL;
    node *curr_node=root;
    while(curr_node->next!=NULL)
    {
        curr_node=curr_node->next;
    }
    curr_node->next=temp;
    temp->next=NULL;
}


void insertAtPosition(int val,int loc)
{
    node *temp=new node;
    temp->data=val;
    if(loc==1)
    {
        temp->next=root;
        root=temp;
    }

    node *curr_node=root;
    while(curr_node!=NULL)
    {
        curr_node=curr_node->next;
    }
    temp->next=curr_node->next;
    curr_node->next=temp;
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
int main()
{
    node *p,*q,*r;
    p=new node;
    q=new node;
    r=new node;
    p->data=10;
    q->data=20;
    r->data=30;
    p->next=q;
    q->next=r;
    r->next=NULL;
    root=p;
    insertFirst(1000);
    printing();

}
