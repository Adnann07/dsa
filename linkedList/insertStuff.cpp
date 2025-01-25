void insertFirst()
{
    node *temp;
    temp->next=root;
    root=temp;

}
void insertLast()
{
    node *temp=new node;
    temp->data=val;
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
        root=next;
    }
    int counter=1;
    node *curr_node=root;
    while(curr_node->next!=NULL && counter<loc)
    {
        curr_node=curr_node->next;
        counter++;
    }
    temp->next=curr_node;
    curr_node->next=temp;


}


void insertAtPosition(int loc,int val)
{
    node *temp=new node;
    temp->data=val;

    if(pos==1)
    {
        temp->next=root;
        root=temp;

    }
    node *curr_node=root;
    while(curr_node!=NULL && counter<loc-1)
    {
        curr_node=curr_node->next;
        counter++;
    }
    temp->next=curr_node->next;
    curr_node->next=temp;

}
