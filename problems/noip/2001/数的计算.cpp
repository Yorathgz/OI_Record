#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#define inf 0xffffff;
#define ll long long
using namespace std;

inline int read()
{
	int x=0,f=1;char ch=0;
	while(ch!='-'&&(ch>'9'||ch<'0')) ch=getchar();
	if(ch=='-') f=-1,ch=getchar();
	while(ch>='0'&&ch<='9') x=x*10+ch-'0',ch=getchar();
	return x*f;
}

inline void write(int x)
{
	if(x<0) x=-x,putchar('-');
	if(x>9) write(x/10);
	putchar(x%10+'0');
} 

/*************************************************************/
//type1,

int main()
{
	int a[1001],n,i,s;
	a[1]=1;
	cin>>n;
	for(s=2;s<=n;s++)
	{
		a[s]=0;
		for(i=1;i<=s/2;i++)
		{
			a[s]+=a[i];
		}
		a[s]++;
	}
	cout<<a[n];
}
