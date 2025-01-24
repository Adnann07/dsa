#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node *next;
};
node *root;

void deleteMiddle()
{
   node *slow=NULL;
   node *fast=NULL;
   node *prev=NULL;
   while(fast!=NULL && fast->next!=NULL)
   {
       prev=slow;
       slow->next;
       fast->next->next;
   }
}

void printing()
{
    node *curr_node=root;
    while(curr_node!=NULL)
    {
        cout<<curr_node->data<<" ";
    }
    cout<<endl;
}
