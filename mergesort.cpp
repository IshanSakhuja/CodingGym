#include<bits/stdc++.h>
using namespace std;
int arr[100];
void split(int l,int h);
void merge(int l,int mid,int h);
int main()
{
	int a,b,i,j,size;
	cin >> size;
	for(i=0;i<size;i++)
		cin >> arr[i];
	split(0,size-1);
	for(i=0;i<size;i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
void split(int l,int h)
{
	if(l < h)
	{
		int mid = (l+h)/2;
		split(l,mid);
		split(mid+1,h);
		merge(l,mid,h);
	}
}
void merge(int l,int mid,int h)
{
	int temp = (h+1-l),i=l,j=mid+1;
	vector<int> ishan(temp);
	temp = 0;
	while(i <= mid && j <= h)
	{
		if(arr[i] < arr[j])
			ishan[temp++] = arr[i++];
		else
			ishan[temp++] = arr[j++];
	}
	while(i<=mid)
		ishan[temp++] = arr[i++];
	while(j<=h)
		ishan[temp++] = arr[j++];
	for(i=0;i<ishan.size();i++,l++)
		arr[l] = ishan[i];
}
