//atoi函数：把参数 str 所指向的字符串转换为一个整数（类型为 int 型）。 
//IP地址在机器中用一个无符号长整型数表示，例如：整数3232235876，其机内二进制表示就是11000000 10101000 00000001 01100100，按照8位一组用点分开，IP地址就写成192.168.1.100
//输入一个整数，输出对应的IP地址。 
#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>
int main(void)
{
	char c;
    char num[100];
	int i=0;
	unsigned int shuzi;
	unsigned int first=0,second=0,third=0,fourth=0;
	while(c!=EOF){
		c=getchar();
		num[i]=c;
		i++;
		while(c=='\n'){
			shuzi=atoi(num);
			first=(shuzi&0xff000000)>>24;
			second=(shuzi&0xff0000)>>16;
			third=(shuzi&0xff00)>>8;
			fourth=shuzi&0xff;
			printf("%d.%d.%d.%d\n",first,second,third,fourth);
			i=0;
//			printf("%d",shuzi);	
			break;	
		}
		
		continue;
	}
	
	return 0;
} 
