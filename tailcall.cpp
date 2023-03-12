#include<bits/stdc++.h>
using namespace std;
#define n 4
void tq(int a[n],int l,int h)
{
	 if (l < h)
    {
        int pi = partition(a, l, h);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, h);
    }
}

int main()
{

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	tq(a);
	return  0;
}