#include<stdio.h>
int main(void)
{
	int n;
	int sum=0,cheng=1,all=0;
	printf("������һ�����֣�"); 
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum=sum+i;
		cheng=cheng*i;
		all=all+cheng;
	}
	printf("�ۼӺͣ�%d\n",sum);
	printf("�׳ˣ�%d\n",cheng);
	printf("�׳˺ͣ�%d",all);
	return 0;
}
