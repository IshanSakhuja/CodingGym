//Sorting by values in frequency in map
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,temp,size,i,j;
	cin >> size;
	vector<int> arr(size);
	map<int,int> ishan;
	map<int,int>::iterator it;
	vector<pair<int,int> > num;
	for(i=0;i<size;i++)
		cin >> arr[i];
	for(i=0;i<size;i++)
		++ishan[arr[i]];
	for(it=ishan.begin();it!=ishan.end();it++)
		num.push_back(make_pair(it->second,it->first));
	sort(num.begin(),num.end());
	for(i=0;i<num.size();i++)
		cout << num[i].second << endl;
	return 0;
}