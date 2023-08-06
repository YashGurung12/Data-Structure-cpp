#include <iostream>
using namespace std;
class node
{
public:
	node *next;
	int data;

	node(int d)
	{
		data=d;
		next=NULL;
	}
};
void InsertionAtHead(node *&head,int d)
{
	if(head==NULL)
	{
		head=new node(d);
		return;
	}
	node *n=new node(d);
	n->next=head;
	head=n;
}
void display(node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<"->";
		head=head->next;
	}
}
int main()
{
	node *head=NULL;
	InsertionAtHead(head,4);
	InsertionAtHead(head,4);
	InsertionAtHead(head,4);

	display(head);
}