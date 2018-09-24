#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node* link;
};



   void insert(node **head,int data)
   {
        node* temp = new node();
        temp->data = data;
        temp->link = *head;
        *head = temp;

   }

  void print(node* head)
  {
    while(head->link!=NULL)
    {
        cout<<head->data<<" ";
        head= head->link;
    }
  }

int main()
{
    node *head = new node();
    int n,v;
    cout<<"Enter no. of elements you want to insert\n";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter value\n";
        cin>>v;
        insert(&head,v);
        print(head);
    }

    return 0;
}
