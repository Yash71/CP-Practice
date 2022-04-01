#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],b[n],c=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		int u=0,d=0,r=0,l=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]>a[j] && b[i]==b[j])
			r++;
			else if(a[i]==a[j] && b[i]>b[j])
			u++;
			else if(a[i]<a[j] && b[i]==b[j])
			l++;
			else if(a[i]==a[j] && b[i]<b[j])
			d++;
		}
		if(r>0 && l>0 && d>0 && u>0)
		c++;
	}
	cout<<c;
}