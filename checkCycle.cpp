#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
}*start,*temp,*p;
void insert();
void display();
void checkCycle();
vector<node *> ishan;
int main()
{
	start = temp = p = NULL;
	int a;
	cout << "Enter the operation to be performed" << endl;
	while(1)
	{
		cout << "1.Insert\n2.Display\n3.Check Cycle\n4.Exit" << endl;
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
				checkCycle();
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
void checkCycle()
{
	p = start;
	int a;
	while(p != NULL)
	{
		ishan.push_back(p);
		p = p->next;
		set<node *> temp(ishan.begin(),ishan.end());
		if(temp.size() != ishan.size())
		{
			cout << "True" << endl;
			return;
		}
	}
	cout << "False" << endl;
}
