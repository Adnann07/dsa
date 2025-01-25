

#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *next;
};
node *root;


void searching(int val)
{
    node *curr_node=root;
    while(curr_node!=NULL)
    {
        if(curr_node->data==val)
        {
            cout<<val<<" found"<<endl;
            return;
        }
        curr_node=curr_node->next;
    }
    cout<<val<<" not found"<<endl;
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
    searching(10);
    printing();

}
