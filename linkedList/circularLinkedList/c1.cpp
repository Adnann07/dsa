#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *root=NULL;

void insertAtEnd(int value) {
    node *temp = new node();
    temp->data = value;
    temp->next = NULL;

    if (root == NULL) {
        root = temp;
        temp->next = root;  // Circular link
    } else {
        node *curr = root;
        while (curr->next != root) {
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = root;  // Maintain circular link
    }
}

void list_size()
{
    node *curr=root->next;
    int len=1;
    while(curr!=root)
    {
        len++;
        curr=curr->next;
    }
    cout<<len<<endl;
}

bool detectingCycle()
{
    node *fast=root;
    node *slow=root;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->nest;
        fast=fast->next->next;

        if(slow==fast)
        {
            slow=root;
            while(slow->next!=fast->next)
            {
                slow=slow->nest;
                fast=fast->next;
            }
            fast->next=NULL;
        }
    }
}

void reverseCircularList()
{
    node *prev=NULL;
    node *cur=root;
    node *next=NULL;

    do{
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    } while(curr!=root)

    root->next=prev;
    root=prev
}



void splitCircularList(node*& head1, node*& head2) {
    if (root == NULL) {
        head1 = head2 = NULL;
        return;
    }

    node *slow = root, *fast = root;

    // Move fast pointer 2 steps and slow pointer 1 step
    while (fast->next != root && fast->next->next != root) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Split the list into two halves
    head1 = root;
    head2 = slow->next;
    slow->next = head1;

    // Connect the second list to the root
    fast = head2;
    while (fast->next != root) {
        fast = fast->next;
    }
    fast->next = head2;
}
