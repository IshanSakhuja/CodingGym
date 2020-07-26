//https://www.hackerrank.com/challenges/maximum-element/problem
#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int inde;
int maxElement;
void push(int );;
int pop();
int top();
int getMax();
int main()
{
    int i,j,a,b,temp,size,test;
    maxElement = 1;
    inde = -1;
    cin >> test;
    for(i=0;i<test;i++)
    {
        cin >> j;
        if(j == 1)
        {
            cin >> temp;
            push(temp);
        }
        else if(j == 2)
        {
            pop();
        }
        else
        {
            cout << getMax() << endl;
        }
    }
    return 0;
}
void push(int ishan)
{
    int temp;
    temp = ishan;
    if(ishan > maxElement)
    {
        ishan = (2*ishan) - maxElement;
        maxElement = temp;
    }
    arr[++inde] = ishan;
}
int pop()
{
    if(inde == -1)
    {
        cout << "Stack Empty" << endl;
        return -1;
    }
    if(arr[inde] > maxElement)
    {
        maxElement = 2*maxElement - arr[inde];
    }
    return arr[inde--];
}
int getMax()
{
    if(inde == -1)
    {
        cout << "No Element in stack" << endl;
        return -1;
    }
    return maxElement;
}
