#include<stdio.h>
#include<string.h>
void strReverse(char s[]); 
int strLength(char s[]);
int main() 
{
	char s[1000];
	printf("输入一个字符串\n");
	scanf("%s",&s);

	printf("串%s的长度为:%d\n",s,strlen(s));
	
	
int i,j;
char t;
	for(i=0,j=strlen(s)-1;i<j;i++,j--)  /* 从两头遍历s */
	{
	    
		t=s[i]; 
	    s[i]=s[j]; 
	    s[j]=t;   
		}
	    
	printf("反转后:%s",s);
	return 0;
}






