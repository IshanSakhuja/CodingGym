#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
	node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
	node()
	{
		this->next = NULL;
	}
}*head=NULL,*temp,*p,*k;
void display();
void insert();
void checkCycle();
int main()
{
	int ishan;
	cout << "Enter the operation to be performed" << endl;
	while(1)
	{
		cout << "1.Insert\n2.Display\n3.Check Cycle\n4.Exit" << endl;
		cin >> ishan;
		switch(ishan)
		{
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 3:
				checkCycle();
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
	int ishan;
	cout << "Enter the data" << endl;
	cin >> ishan;
	temp = new node();
	temp->data = ishan;
	if(head == NULL)
	{
		head = temp;
		head->next = head;
	}else{
		p = head;
		while(p->next != head)
			p = p->next;
		p->next = temp;
		temp->next = head;
	}
}
void display()
{
	if(head == NULL)
	{
		cout << "Empty List" << endl;
		return;
	}else{
		p = head;
		cout << p->data << endl;
		p=p->next;
		while(p != head)
		{
			cout << p->data << endl;
			p = p->next;
		}
	}
}
void checkCycle()
{
	p = head->next;
	k = head->next->next;
	while(p->data != k->data)
	{
		p=p->next;
		k=k->next->next;
	}
	cout << p->data << endl;
}
