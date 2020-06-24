//https://www.hackerrank.com/challenges/qheap1/problem
#include<bits/stdc++.h>
using namespace std;
void insert(int *arr);
void deleteRoot(int *arr);
int size;
int main()
{
	int a,b,c,temp,num,test;
	vector<int> ishan;
	size = 0;
	int arr[100000];
	cin >> test;
	for(a=0;a<test;a++)
	{
		cin >> temp;
		switch(temp)
		{
			case 1:
				insert(arr);
				break;
			case 2:
				deleteRoot(arr);
				break;
			case 3:
				ishan.push_back(arr[1]);
				break;	
		}
	}
	for(a=0;a<ishan.size();a++)
		cout << ishan[a] << endl;	
	return 0;	
}
void insert(int arr[])
{
	int a,b,c,temp,num;
	cin >> num;
	if(size == 0)
		arr[++size] = num;
	else
	{
		arr[++size] = num;
		a = size;
		while(a > 1)
		{
			if(arr[a] < arr[a/2])
			{
				temp = arr[a];
				arr[a] = arr[a/2];
				arr[a/2] = temp;
				a = a / 2;
			}
			else
				break;
		}
	}
}
void deleteRoot(int arr[])
{
	int a,b,c,temp,num;
	cin >> num;
	for(a=1;a<size;a++)
	{
		if(arr[a] == num)
			break;
	}
	temp = arr[size];
	arr[size] = arr[a];
	arr[a] = temp;
	size = size - 1;
	while(1)
	{
		if(arr[2*a+1] < arr[a] && arr[2*a] < arr[a] && (2*a+1) <= size)
		{
			if(arr[a*2+1] < arr[a])
			{
				temp = arr[a*2+1];
				arr[a*2+1] = arr[a];
				arr[a] = temp;
				a = a * 2 + 1;
			}
			else
			{
				temp = arr[a*2];
				arr[a*2] = arr[a];
				arr[a] = temp;
				a = a * 2;
			}
		}
		else if(arr[a*2+1] < arr[a] && size >= a*2+1)
		{
			temp = arr[a*2+1];
			arr[a*2+1] = arr[a];
			arr[a] = temp;
			a = a * 2 + 1;	
		}
		else if(arr[a*2] < arr[a] && size >= a*2)
		{
			temp = arr[a*2];
			arr[a*2] = arr[a];
			arr[a] = temp;
			a = a * 2;
		}
		else 
			break;
	}
}
