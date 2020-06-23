#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
}*start,*temp,*p;
void insert();
void display();
void removeDuplicates();
int main()
{
	start = temp = p = NULL;
	int a;
	cout << "Enter the operation to be performed" << endl;
	while(1)
	{
		cout << "1.Insert\n2.Display\n3.Remove Duplicates\n4.Exit" << endl;
		cin >> a;
		switch(a)
		{
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 3:
				removeDuplicates();
				break;
			case 4:
				exit(0);	
			default : 
				cout << "Enter the right key" << endl;		
		}
	}
	return 0;
}
void insert()
{
	
	temp = new node();
	cout << "Enter the data" << endl;
	cin >> temp->data;
	temp->next = NULL;
	if(start == NULL)
		start = temp;
	else
	{
		p = start;
		while(p->next != NULL)
			p=p->next;
		p->next = temp;	
	}
}
void display()
{
	if(start == NULL)
		cout << "List is Empty" << endl;
	
	else
	{
		p = start;
		while(p!=NULL)
		{
			cout << p->data << " ";
			p=p->next;
		}
		cout << endl;
	}
}
void removeDuplicates()
{
	int ishan;
	node *pointer;
	p = start;
	while(p->next!=NULL)
	{
		ishan = p->next->data;
		if(ishan == p->data)
		{
			temp = p->next;
			while(temp != NULL)
			{
				if(temp->data == ishan)
					temp = temp->next;
				else
					break;
			}
			p->next = temp;	
		}
		else
			p = p->next;
	}
}
