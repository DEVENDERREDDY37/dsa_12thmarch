#include<bits/stdc++.h>
using namespace std;
string pseq(string a[],string e)
{
	string output="";
	int n=e.length();
	for(int i=0;i<n;i++)
	{
		if(e[i]==' ')
		{
			output=output+"0";
		}
		else
		{
			int p= (e[i]-'A');
			output=output+a[p];
		}
	}
	return output;
}
int main()
{
	string s;
	cin>>s;
	string s1[]={"2","22","222","3","33","333","4",
            "44",  "444", "5",   "55",  "555",  "6",   "66",
            "666", "7",   "77",  "777", "7777", "8",   "88",
            "888", "9",   "99",  "999", "9999" };
            
	cout<<pseq(s1,s)<<endl;
}