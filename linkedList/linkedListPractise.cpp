#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
node* root;
void insFirst(int val)
{
    node *temp=new node;
    temp->data=val;
    temp->next=root;
    root=next;
}
void insLast(int val)
{
    node *temp=new node;
    temp->data=val;
    temp->next=NULL;
    node *curr_node=root;
    while(curr_node->next!=NULL)
    {
        curr_node=curr_node->next;
    }
    curr_node->next=temp;
    temp->next=NULL;
}

void delFirst()
{

    if(root!=NULL)
    {
        root=root->next;
    }
}

void printing()
{
    node *curr_node=root;
    while(curr_node->next!=NULL)
    {
        cour<<curr_node->data<<" ";
        curr_node=curr_node->next;
    }

}

void printFirst()
{
    node *curr_node=root;
    cout<<curr_node->data<<" ";
}
void searching(int val)
{
    node *curr_node=root;
    int x=0;
    while(curr_node->next!=NULL)
    {
        if(curr_node->data==val)
        {
            x=1;
            cout<<"found"<<endl;
            break;
        }
        curr_node=curr_node->next;
    }
    if(x==0) cout<<"Not found"<<endl;
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

void print2ndLast()
{
    node *curr_node=root;
    node *prev_node=new node;
    prev_node->next=NULL;
    while(curr_node->next!=NULL)
    {
        prev_node=curr_node;
        curr_node=curr_node->next;
    }
    cour<<prev_node->data<<" ";
}

void reversePrinting(node *curr_node)
{
    if(curr_node!=NULL)
    {
        reversePrinting(curr_node->next);
        cout<<curr_node->data<<" ";
    }
}

void searching(int val)
{
    node *curr_node=root;

    while(curr_node->next!=NULL)
    {
        if(val==curr_node->data)
        {
            x=1;
            cout<<"Found"<<endl;
            break;
        }

            curr_node=curr_node->next;


    }
    if(x==0) cout<<"not found"<<endl;
}

int main()
{
    node *p,*q,*r;
    p->data=10;
    q->data=20;
    r->data=30;
    p->next=q;
    q->next=r;
    r->next=NULL;
    root=p;
    printing();
    searching(20);

}
