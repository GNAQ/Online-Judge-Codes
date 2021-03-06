#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<vector>
using namespace std;
typedef long long ll;


template<typename int_t>
void readx(int_t &x)
{
	x=0; int_t k=1; char ch=0;
	while (ch<'0' || ch>'9') { ch=getchar(); if (ch=='-') k=-1; }
	while (ch>='0' && ch<='9') { x=x*10+ch-'0'; ch=getchar(); }
	x*=k;
}


int main()
{
	int n,k;
	readx(n); readx(k);
	if (k>=n)
	{
		printf("%d\n", 2);
		return 0;
	}
	
	printf("%d", n*2/k + ((n*2%k)!=0));
	
	
	return 0;
}