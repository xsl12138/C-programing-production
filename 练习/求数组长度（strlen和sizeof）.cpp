#include<stdio.h>
#include<string.h>
int main(void)
{
	int a=10;
	char b='a';
	int num[]={1,2,3,4};
	char ex00[]="Hello";
	char ex01[]="Hello\0";
	char ex02[]="Hel\0lo";
	char ex03[]="Hel\\lo";
//	char ex[]={1,a,2,b};  //�����⣬�����ַ�����ʱ�����Ԫ����ö���ͬһ����
//  char ex1[]={1,2,3,4};  //����������
//  char ex2[]={'a','b','c','d'};  //����������
	
	int c=sizeof(a);
	int d=sizeof(b);
	int k=sizeof(num);
	int e=sizeof(&a);
	int f=sizeof(&b);
	int z=sizeof(&num[4]);
	 
//	int length = sizeof(num) / sizeof(&num);  //�����鳤��

//	printf("%p\n%p\n%p\n",&a,&b,&num);  //ȡ��ַ
//	printf("%d %d %d %d %d %d",c,d,k,e,f,z);  //��ӡ���ݳ����Լ����ݵ�ַ���ȣ���ռ�ֽڣ�
	
	printf("%d %d %s\n",strlen(ex00),sizeof(ex00)/sizeof(ex00[0]),ex00);
	printf("%d %d %s\n",strlen(ex01),sizeof(ex01)/sizeof(ex01[0]),ex01);
	printf("%d %d %s\n",strlen(ex02),sizeof(ex02)/sizeof(ex02[0]),ex02);
	printf("%d %d %s\n",strlen(ex03),sizeof(ex03)/sizeof(ex03[0]),ex03);
	
	return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//int main(void)
//{
//	
//}