//https://codeforces.com/contest/1392/problem/A
#include<bits/stdc++.h>
using namespace std;
void kk();
int main()
{
	int a,b,test,temp,size,num,i,j;
	cin >> test;
	for(i=0;i<test;i++)
		kk();
	return 0;
}
void kk()
{
	int a,i,j,size,temp,count=0;
	cin >> size;
	vector<int> arr;
	vector<int> ishan;
	for(i=0;i<size;i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}
	p:
		cout << "";
	for(i=0;i<arr.size();i=i+2)
	{
		if((i+1) == arr.size())
		{
			ishan.push_back(arr[i]);
			break;
		}
		if(arr[i] != arr[i+1])
			ishan.push_back(arr[i]+arr[i+1]);
		else{
			ishan.push_back(arr[i]);
			ishan.push_back(arr[i+1]);
		}
	}
	for(i=0;i<ishan.size()-1;i++)
	{
		if(ishan[i] == ishan[i+1])
			++count;
	}
	if(ishan.size() == 1)
	{
		cout << "1" << endl;
		return;
	}
	else if(count == ishan.size()-1)
	{
		cout << ishan.size() << endl;
		return;
	}else{
		arr.clear();
		for(i=0;i<ishan.size();i++)
			arr.push_back(ishan[i]);
		ishan.clear();
		count = 0;
		goto p;
	}
}
