#include<stdio.h>
#include<string.h>
void strReverse(char s[]); 
int strLength(char s[]);
int main() 
{
	char s[1000];
	printf("����һ���ַ���\n");
	scanf("%s",&s);

	printf("��%s�ĳ���Ϊ:%d\n",s,strlen(s));
	
	
int i,j;
char t;
	for(i=0,j=strlen(s)-1;i<j;i++,j--)  /* ����ͷ����s */
	{
	    
		t=s[i]; 
	    s[i]=s[j]; 
	    s[j]=t;   
		}
	    
	printf("��ת��:%s",s);
	return 0;
}






