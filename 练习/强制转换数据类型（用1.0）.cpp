#include<stdio.h>
int main()
{
	unsigned long a,b;
	double c;
	scanf("%lu%lu",&a,&b);
	c=1.0*a/b;
	printf("%.9lf",c);
	return 0;	
}
