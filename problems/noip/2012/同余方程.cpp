#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#define inf 0xffffff
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
//type1, type6

long long a,b;

void e_gcd(int a,int b,int &x,int &y)
{
	if(b==0)
	{
		x=1;y=0;
		return;
	}
	e_gcd(b,a%b,x,y);
	int t=x;x=y;y=t-a/b*y;
}

int main(){
    cin>>a>>b;
    int x,y;
    e_gcd(a,b,x,y);
    x=(x%b+b)%b;
    cout<<x;
    return 0;
}
