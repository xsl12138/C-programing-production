//atoi�������Ѳ��� str ��ָ����ַ���ת��Ϊһ������������Ϊ int �ͣ��� 
//IP��ַ�ڻ�������һ���޷��ų���������ʾ�����磺����3232235876������ڶ����Ʊ�ʾ����11000000 10101000 00000001 01100100������8λһ���õ�ֿ���IP��ַ��д��192.168.1.100
//����һ�������������Ӧ��IP��ַ�� 
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
