#include<bits/stdc++.h>
using namespace std;
#define n 3
#define  m 3
void rotate(int a[n][m])
{
   for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {
 
            int temp = a[i][j];
            a[i][j] = a[n - 1 - i][j];
            a[j][n-1-i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n- 1 - j] = a[n-1-j][i];
            a[n - 1 - j][i] = temp;
        }
    }
}

void print(int a[n][m])
{
	  for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int  a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<endl;
	rotate(a);
	print(a);
	return 0;
}