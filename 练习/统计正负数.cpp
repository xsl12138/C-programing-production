#include<stdio.h>
int i=0,t=0,a;
int num=1;
int main(void)

{
	while(1)
	{
		
		printf("�������%d������:\n",num);
		scanf("%d",&a);		
		if(a!=0){
			if(a>0){
				i++;
			
			}
			else t++;
		}
		num++;
	printf("�����У�%d\n",i);
	printf("�����У�%d\n",t);
	}
	
	return 0;
}
