https://www.codechef.com/AUG20B/problems/CRDGAME3
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,test,count1,count2,temp1,temp2,c,r;
	cin >> test;
	for(a=0;a<test;a++)
	{
		cin >> c >> r;
		if(c >= 0 && c <= 9 && r >=0 && r <= 9)
		{
			cout << "1 1" << endl;
			continue;
		}else{
			temp1 = c / 9;
			temp2 = c % 9;
			if(temp2 == 0)
				count1 = temp1;
			else
				count1 = temp1 + 1;
			temp1 = r / 9;
			temp2 = r % 9;
			if(temp2 == 0)
				count2 = temp1;
			else
				count2 = temp1 + 1;
		}
		if(count1 == count2)
			cout << "1 " << count1 << endl;
		else if(count1 < count2)
			cout << "0 " << count1 << endl;
		else
			cout << "1 " << count2 << endl;
	}
}