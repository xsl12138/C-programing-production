//定义的函数作用域问题（swap1函数不能实现值交换，swap2函数可以实现值交换）
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
//若内部交换想要影响外部交换，定义的函数中应该是两个值的地址交换
void swap2(int *a,int *b)
//void swap1(int a,int b)  //重新定义a和b（x和y），数值交换只在swap1函数中进行，不会影响到主函数中数值的变化。
//用swap1时把下面a和b的 “ * ” 去掉
{  
	int t;
	t=*a;
	*a=*b;
	*b=t;
}