#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;

};
node *root=NULL;

void InsertFirst(int val)
{
    node *temp = new node;
    temp->data=val;
    temp->next=root;
    root=temp;
}

void insertLast(int val)
{
    node *temp=new node;
    temp->data=val;
    node *curr_node=root;
    while(curr_node->next!=NULL)
    {
        curr_node=curr_node->next;
    }
    curr_node->=temp;
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
   while(curr_node!=NULL)
   {
       cout<<curr_node->data<<" ";
       curr_node=curr_node->next;
   }
   cout<<endl;
}

int main(void)
{
    InsertFirst(30);
    printing();
}
