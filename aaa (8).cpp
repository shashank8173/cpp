#include<bits/stdc++.h>
using namespace std;
#include"Node2.cpp"
Node* inputTake()
{
	int data;
	cin>>data;
	Node*head=NULL;
	while(data!=-1)
	{
		Node* newNode=new Node(data);
		if(head==NULL)
		{
			head=newNode;
		}
		else
		{
			Node*temp=head;
			while(temp->next!=NULL)
			{
			   temp=temp->next;	
			}
			temp->next=newNode;
		}
		cin>>data;
	}
     return head;
}
void print(Node* head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
int main()
{
	Node*head=inputTake();//calling function
	print(head);
}
