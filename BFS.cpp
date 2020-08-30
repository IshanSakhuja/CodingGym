#include<bits/stdc++.h>
using namespace std;
struct Queue{
	int front;
	int rear;
	int *A;
	int size;
	Queue(int size)
	{
		front = -1;
		this->size = size+1;
		rear = -1;
		A = new int[size+1];
	}
	void enqueue(int temp){
		if(rear == size-1)
		{
			cout << "Cannot Enqueue" << endl;
			return;
		}else{
			++rear;
			A[rear] = temp;
		}
	}
	int dequeue(){
		if(rear == front){
			cout << "Cannot Dequeue"  << endl;
			return -1;
		}else{
			++front;
			return A[front];
		}
	}
	bool isEmpty(){
		if(rear == front){
			return true;
		}else{
			return false;
		}
	}
};
int main()
{
	int i,j,size,u,temp;
	cin >> size;
	int arr[size+1][size+1];
	vector<int> visited(size+1,0);
	for(i=1;i<=size;i++)
	{
		for(j=1;j<=size;j++)
			cin >> arr[i][j];
	}
	for(i=1;i<=size;i++)
	{
		for(j=1;j<=size;j++)
		{
			if(arr[i][j] == 1)
			{
				u = i;
				break;
			}
		}
		if(u == i)
			break;
	}
	Queue Q(size);
	Q.enqueue(u);
	visited[u] = 1;
	cout << u << endl;
	while(!Q.isEmpty()){
		temp = Q.dequeue();
		for(j=1;j<=size;j++)
		{
			if(arr[temp][j] == 1 && visited[j] == 0)
			{
				Q.enqueue(j);
				cout << j << endl;
				visited[j] = 1;
			}
		}
	}
	return 0;
}
