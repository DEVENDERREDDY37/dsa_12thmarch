#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0;
	string s1;
	for(int i=s.length()-1;i>=0;--i)
	{
		s1.push_back(s[i]);
    }
    if(s==s1)
    {
    	cout<<"yes";
	}
	else
	cout<<"no";
}