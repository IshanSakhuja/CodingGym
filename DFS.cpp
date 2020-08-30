#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,i,j,temp;
	cin >> size;
	int arr[size+1][size+1];
	vector<int> Stack;
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
				Stack.push_back(i);
				visited[i] = 1;
				cout << i << endl;
				break;
			}
		}
		if(visited[i] == 1)
			break;
	}
	while(Stack.size())
	{
		temp = Stack[Stack.size()-1];
		Stack.pop_back();
		for(j=1;j<=size;j++)
		{
			if(arr[temp][j] == 1 && visited[j] == 0)
			{
				Stack.push_back(j);
				cout << j << endl;
				visited[j] = 1;
			}
		}
	}
	return 0;
}
