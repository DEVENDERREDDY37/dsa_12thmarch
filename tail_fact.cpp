#include<bits/stdc++.h>
using namespace std;
int fact(int n,int t=1)
{
        if(n==0)
        {
        	return t;
		}
		else
		{
			return   fact(n-1,n*t);
		}
}
int main()
{
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
	return 0;
}