
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *root;

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
void deleteFirst()
{
    if(root->next!=NULL)
    {
        root=root->next;
    }
}

void deleteatValue(int val)
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
}







void deletebyLocation(int loc)
{
    if(loc==1)
    {
        if(root->next!=NULL)
        {
            root=root->next;
        }
    }

    int counter=1;
   node *curr_node=root;
   node prev_node=NULL;
   while(curr_node->next!=NULL && counter<loc)
   {
       prev_node=curr_node;
       curr_node=curr_node->next;
       counter++;
   }
   prev_node->next=curr_node->next;
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

void print2ndLast()
{
    node *curr_node=root;
    node *prev_node=NULL;
    while(curr_node->next!=NULL)
    {
        prev_node=curr_node;
        curr_node=curr_node->next;
    }
    cout<<prev_node->data<<" ";
}

void insertFirst(int val)
{
    node *temp=new node;
    temp->data=val;
    temp->next=root;
    root=temp;
}
int main()
{
    insertFirst(10);
    insertFirst(20);
    insertFirst(30);
    insertFirst(40);
    insertFirst(50);
    insertFirst(60);
    insertFirst(70);
    insertFirst(80);
    insertFirst(90);
    printing();
    deleteFirst();
    printing();
    deleteLast();
    printing();
    deleteatValue(50);
    printing();
}

