#include<bits/stdc++.h>
using namespace std;
void p();
int main()
{
	int i,test;
	cin >> test;
	for(i=0;i<test;i++)
		p();
	return 0;
}
void p()
{
	int i,j,a,size,temp,num=INT_MAX,count=0;
	cin >> size;
	vector<int> arr(size);
	for(i=0;i<size;i++)
		cin >> arr[i];
	for(i=0;i<size-1;i++)
	{
		if(arr[i] > arr[i+1])
		{
			temp = arr[i];
			for(j=i+1;j<size;j++)
			{
				if(num > arr[j] && arr[j] < temp)
					num = arr[j];
				else
					break;
			}
			count += (temp-num);
			++i;
		}
	}
	cout << count << endl;
}
