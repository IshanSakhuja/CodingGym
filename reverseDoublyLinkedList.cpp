#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
	node *prev;
}*start,*temp,*p,*k;
void insert();
void display();
void reverse();
int main()
{
	start = p = temp = NULL;
	int a;
	cout << "Enter the operation to be performed" << endl;
	while(1)
	{
		cout << "1.Insert\n2.Display\n3.Reverse\n4.Exit" << endl;
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
				reverse();
				break;
			case 4:
				exit(0);	
			default:
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
	temp->prev = NULL;
	if(start == NULL)
		start = temp;
	else
	{
		p = start;
		while(p->next != NULL)
			p = p->next;
		p->next = temp;
		temp->prev = p;	
	}	
}
void display()
{
	if(start == NULL)
	{
		cout << "List is Empty" << endl;
		return;
	}
	else
	{
		p = start;
		while(p!= NULL)
		{
			cout << p->data << " ";
			p = p->next;
		}
	}
}
void reverse()
{
	p = start;
	while(p->next != NULL)
		p = p->next;
	start = p;	
	temp = p->prev;
	p->prev = NULL;
	cout << p->data << endl;
	while(p!=NULL)
	{
		p->next = temp;
		if(temp == NULL)
			break;
		k = temp->prev;
		temp->prev = p;
		p = temp;
		temp = k;
		cout << p->data << endl;
	}	
} 
