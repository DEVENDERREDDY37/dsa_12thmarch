#include<bits/stdc++.h>
using namespace std;
#define max_char 26
bool isomorphic(string x,string y,int m,int n)
{
       if(m!=n)
       {
       	return false;
	   }
	   int count[max_char]={0};
	   int dcount[max_char]={0};
	   for(int i=0;i<m;i++)
	   {
	   	count[x[i] - 'a']++;
	   	dcount[y[i] - 'a']++;
	   }
	   for(int i=0;i<m;i++)
	   {
	   	if(count[x[i]-'a']!=dcount[y[i]-'a'])
	   	{
	   		return false;
		   }
	   }
	   return true;
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int m,n;
	m=s1.length();
	n=s2.length();
	cout<<"statement "<<isomorphic(s1,s2,m,n)<<endl;
}