#include<stdio.h>
int main(void)
{
	char str[];
	scanf("%s",str);
//	sum(char a[]);
    int len=sizeof(str);
    printf("%d\n",len);
	return 0;
}



int sum(char str[])
{
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i+1;
}