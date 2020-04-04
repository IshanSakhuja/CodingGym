/*https://www.codechef.com/problems/FRGTNLNG*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void ans();
int main()
{
	int i,b,temp,test;
	cin >> test;
	vector<vector<int> > ans(test);
	for(i=0;i<test;i++)
	{
		int a,b,c,temp,ishan,size1,size2;
		cin >> size1 >> size2;
		int arr[size1];
		for(a=0;a<size1;a++)
			arr[a] = 0;
		string str;
		vector<string> word(size1);
		vector<vector<string> > phrases(size2);
		for(a=0;a<size1;a++)
			cin >> word[a];
		for(a=0;a<size2;a++)
		{
			cin >> ishan;
			for(b=0;b<ishan;b++)
			{
				cin >> str;
				phrases[a].push_back(str);
			}
		}
		for(a=0;a<size1;a++)
		{
			for(b=0;b<size2;b++)
			{
				for(c=0;c<phrases[b].size();c++)
				{
					if(word[a] == phrases[b][c])
					{
						arr[a] = 1;
						goto ishan;
					}
				}
			}
			ishan:
				cout << "";
		}
		for(a=0;a<size1;a++)
		{
			if(arr[a] == 1)
				ans[i].push_back(1);
			else
				ans[i].push_back(0);	
		}
	}
	for(i=0;i<test;i++)
	{
		for(b=0;b<ans[i].size();b++)
		{
			if(ans[i][b] == 1)
				cout << "YES" << " ";
			else
				cout << "NO" << " ";	
		}
		cout << endl;
	}
	return 0;	
}
