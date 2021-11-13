//输入一个整数 n（n<=10000），打印n以内所有这样的完全平方数 y：y=a²=b²x10+c²。例如，361=19²=6²x10+1²，则361是这样的完全平方数。

//预期输入：
//500

//预期输出：
//49=7*7=2*2*10+3*3
//121=11*11=2*2*10+9*9
//169=13*13=4*4*10+3*3
//196=14*14=4*4*10+6*6
//361=19*19=6*6*10+1*1
//441=21*21=6*6*10+9*9
//484=22*22=4*4*10+18*18

//此代码为自己编写
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(void)
{
	bool condition=true;
	int nums[101];
	for(int i=1;i<=100;i++){
		nums[i]=i*i;
	}
	int n=0;
	scanf("%d",&n);
	
	for(int i=1;i<=sqrt(n);i++){
		condition=true;
		for(int b=1;(b<=nums[i]/10)&&condition;b++){
			for(int c=1;c<=nums[i];c++){
					if(b*b*10+c*c==nums[i]){
						printf("%d=%.0lf*%.0lf=%d*%d*10+%d*%d\n",nums[i],sqrt(nums[i]),sqrt(nums[i]),b,b,c,c);//sqrt()出来的值是double类型
						condition=false;
					}
					else continue;
				}
		}
	}
	
		
	return 0;
}



