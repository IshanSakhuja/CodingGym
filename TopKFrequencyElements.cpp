//https://leetcode.com/problems/top-k-frequent-elements/solution/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,temp,size,i,j,k;
	cin >> size;
	vector<int> arr(size);
	map<int,int> map1;
	map<int,int>::iterator it;
	vector<pair<int,int> > pairs;
	vector<int> ans;
	vector<int> answer;
	for(i=0;i<size;i++)
		cin >> arr[i];
	cin >> k;
	for(i=0;i<size;i++)
		++map1[arr[i]];
	for(it=map1.begin();it!=map1.end();it++)
		pairs.push_back(make_pair(it->second,it->first));
	sort(pairs.begin(),pairs.end());
	for(i=pairs.size()-1;i>=0;i--)
		ans.push_back(pairs[i].second);
	for(i=0;i<k;i++)
		answer.push_back(ans[i]);
	for(i=0;i<answer.size();i++)
		cout << answer[i] << " ";
	cout << endl;
	return 0;
}
