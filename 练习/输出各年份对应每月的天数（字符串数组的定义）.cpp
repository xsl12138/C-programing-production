#include<string.h>
#include<stdio.h>
int main(void)
{
	char months[12][20]={  //定义二维数组（或可以用char *months[20]定义）（第二个括号代表每个字符串的长度，必须比最长字符串的有效长度大1，因为字符串以\0为结尾）
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