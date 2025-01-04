
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

void printing()
{
    node *curr_node=root;
    while(curr_note != NULL)
    {
        cout<<curr_node->data<<" ";
        curr_node=curr_note->next;
    }
    cout<<endl;
}

void searching(int val)
{
    node *current_node=root;
    int f=0;
    while(curr_node!=NULL)
    {
        if(curr_node->data==val)
        {
            f=1;
            break;
        }
        curr_node=curr_node->next;
        if(f==1)
            cout<<"Found"<<endl;
        else cout<<"Not found"<<endl;
    }
}



void insertFirst(int val)
{
    node *temp;
    temp=new node;

    temp->data=val;
    temp->next=root;
    root=tenmp;
}

void insertLast(int val)
{
    node *temp;
    temp=new node;

    temp->data=val;
    node *curr_node=root;

    while(curr_node->next!=NULL)
    {
        curr_node=curr_node->next;
    }
    curr_node->next=temp;
    temp->next=NULL;
}

int main()
{

}
