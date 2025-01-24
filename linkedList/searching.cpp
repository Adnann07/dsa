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
            cout<<val<<" has been found";
            return;
        }
        curr_node=curr_node->next;
    }
  cout<<val<<" not found"<<endl;
}
