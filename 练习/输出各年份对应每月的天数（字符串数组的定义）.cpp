#include<string.h>
#include<stdio.h>
int main(void)
{
	char months[12][20]={  //�����ά���飨�������char *months[20]���壩���ڶ������Ŵ���ÿ���ַ����ĳ��ȣ��������ַ�������Ч���ȴ�1����Ϊ�ַ�����\0Ϊ��β��
	"Jan",
	"Feb",
	"Mar",
	"Apr",
	"May",
	"Jun",
	"Jul",
	"Aug",
	"Sep",
	"Oct",
	"Nov",
	"Dec"};
	int year=0;
	scanf("%d",&year);
	int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int t=0;
	t=!(year%4)&&year%100||!(year%400);
	
	if(t){
		days[1]=29;
		for(int i=0;i<=11;i++){
			printf("%s:%d\n",months[i],days[i]);
		}
	}
	else
	for(int i=0;i<=11;i++){
	
		printf("%s:%d\n",months[i],days[i]);
	}
	
	return 0;
}