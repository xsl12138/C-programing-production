#include<stdio.h>
int main(void)
{
	int n;
	int sum=0,cheng=1,all=0;
	printf("请输入一个数字："); 
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum=sum+i;
		cheng=cheng*i;
		all=all+cheng;
	}
	printf("累加和：%d\n",sum);
	printf("阶乘：%d\n",cheng);
	printf("阶乘和：%d",all);
	return 0;
}
