//����ĺ������������⣨swap1��������ʵ��ֵ������swap2��������ʵ��ֵ������
#include<stdio.h>
//void swap1(int a,int b);
void swap2(int *a,int *b);
int main(void)
{
	int x=5,y=1;
//	swap1(x,y);
    swap2(&x,&y);
	printf("x=%d,y=%d",x,y);
	return 0;
}
//���ڲ�������ҪӰ���ⲿ����������ĺ�����Ӧ��������ֵ�ĵ�ַ����
void swap2(int *a,int *b)
//void swap1(int a,int b)  //���¶���a��b��x��y������ֵ����ֻ��swap1�����н��У�����Ӱ�쵽����������ֵ�ı仯��
//��swap1ʱ������a��b�� �� * �� ȥ��
{  
	int t;
	t=*a;
	*a=*b;
	*b=t;
}