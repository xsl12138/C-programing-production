#include<stdio.h>
#include<math.h>
//scanf������ν������ʵ��Ϊ�ַ�������ת�������ִ�ӡ����
int main(void)
{
	char c;
	int x=0;
	printf("�������ַ�����\n");
	for (c=getchar();c>='0'&&c<='9';c=getchar()){
		x=10*x+c-'0';
		//c-'0':���ڽ������ַ�ת���ɶ�Ӧ��һλ����
	}
	printf("x=%d",x);
	return 0;
}