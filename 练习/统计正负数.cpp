#include<stdio.h>
int i=0,t=0,a;
int num=1;
int main(void)

{
	while(1)
	{
		
		printf("请输入第%d个数字:\n",num);
		scanf("%d",&a);		
		if(a!=0){
			if(a>0){
				i++;
			
			}
			else t++;
		}
		num++;
	printf("正数有：%d\n",i);
	printf("负数有：%d\n",t);
	}
	
	return 0;
}
