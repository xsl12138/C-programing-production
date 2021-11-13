#include<stdio.h>
int main()
{
	int max(int x,int y,int z);
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d=max(a,b,c);
	printf("max=%d\n",d);
	return 0;
	
}
int max(int x,int y,int z)
{
	int n;
	if(x>=y and x>=z)n=x;
	if(y>=x and y>=z)n=y;
	if(z>=x and z>=y)n=z;
	return(n);
}
