#include<stdio.h>
#include<math.h>
//scanf函数如何将输入的实质为字符的数字转化成数字打印出来
int main(void)
{
	char c;
	int x=0;
	printf("请输入字符串：\n");
	for (c=getchar();c>='0'&&c<='9';c=getchar()){
		x=10*x+c-'0';
		//c-'0':用于将数字字符转化成对应的一位正数
	}
	printf("x=%d",x);
	return 0;
}