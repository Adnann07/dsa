#include<bits/stdc++.h>
using namespace std;
struct node{

    int data;
    node *next;
};
node *root=NULL;

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

void insertAtPosition(int loc,int val)
{
    node *temp=new node;
    temp->data=val;
    if(loc==1)
    {
        temp->next=root;
        root=temp;
    }
    int counter=1;
    node *curr_node=root;
    while(curr_node!=NULL && counter<loc-1)
    {
        curr_node=curr_node->next;
        counter++;
    }
    temp->next=curr_node->next;
    curr_node->next=temp;

}

void insertatValprev(int num, int val)
{
    if (root == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    if (root->data == num)
    {
        return;
    }

    node *currentNode = root;
    while (currentNode->next != NULL)
    {
        if (currentNode->next->data == num)
        {
            break;
        }
        currentNode = currentNode->next;
    }

    if (currentNode->next == NULL)
    {
        cout << "Value " << num << " not found in the list" << endl;
        return;
    }

    node *temp = new node;
    temp->data = val;
    temp->next = currentNode->next;
    currentNode->next = temp;
}
void insertatValnext(int num, int val)
{
    node *currentNode = root;

    while (currentNode != NULL)
    {
        if (currentNode->data == num)
        {
            break;
        }
        currentNode = currentNode->next;
    }

    if (currentNode == NULL)
    {
        cout << "Value " << num << " not found in the list" << endl;
        return;
    }

    node *temp = new node;
    temp->data = val;
    temp->next = currentNode->next;
    currentNode->next = temp;
}


void deleteFirst()
{
    if(root!=NULL)
    {
        root=root->next;
    }
}

void deleteLast()
{
    node *curr_node=root;
    node *prev_node=new node;

    while(curr_node->next!=NULL)
    {
        prev_node=curr_node;
        curr_node=curr_node->next;
    }
    prev_node->next=NULL;
}
void deleteatPosition(int loc)
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
    while(curr_node!=NULL && counter<loc)
    {
        prev_node=curr_node;
        curr_node=curr_node->next;
        counter++;
    }
    prev_node->next=curr_node->next;
}

void deletebyValue(int val)
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

void searching(int val)
{
    int x=0;
    node *curr_node=root;
    while(curr_node->next!=NULL)
    {
        if(curr_node->data==val)
        {
            x=1;
            cout<<val<<" is found"<<endl;
            break;
        }
        curr_node=curr_node->next;
    }
    if(x==0) cout<<val<<" not found"<<endl;
}


void last_node()
{
    node *curr_node=root;
    while(curr_node->next!=NULL)
    {
        curr_node=curr_node->next;
    }
    cout<<curr_node->data<<endl;

}

void previous_of_last_node()
{
    node *curr_node=root;
    node *prev_node=new node;
    while(curr_node->next!=NULL)
    {
        prev_node=curr_node;
        curr_node=curr_node->next;
    }
    cout<<prev_node->data<<endl;

}

void list_size()
{
    int c=0;
    node *curr_node=root;
    while(curr_node!=NULL)
    {
        c++;
        curr_node=curr_node->next;
    }
    cout<<c<<endl;
}
void reversePrint(node *curr_node)
{
    if(curr_node!=NULL)
    {
        reversePrint(curr_node->next);
        cout<<curr_node->data<<" ";
    }
}

int main()
{
    insertFirst(10);
    insertLast(20);
    insertLast(30);
    insertLast(40);
    insertLast(50);
    insertLast(60);
    insertLast(70);
    insertAtPosition(2, 15);
    insertatValprev(3,10);
    insertatValnext(4,11);

    printing();

    deleteFirst();
    printing();

    deleteatPosition(2);
    printing();

    deletebyValue(15);
    printing();

    insertLast(40);
    insertLast(50);
    reversePrint(root);
    cout << endl;

    list_size();

    last_node();
    previous_of_last_node();

    insertFirst(5);
    insertLast(100);
    insertAtPosition(3, 25);

    deleteFirst();
    deleteLast();
    deleteatPosition(4);
    deletebyValue(40);

    printing();
    searching(50);
    searching(100);

    list_size();
    last_node();
    previous_of_last_node();
    reversePrint(root);
    cout << endl;
}
