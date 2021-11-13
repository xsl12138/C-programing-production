//C语言程序设计实验64页第13题
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
	char input,zifu[100];
	int i=0,num[100]={0},zero=0,one=0,qianliangwei[100];
	int n[100]={0};  //循环左移的位数
	
	while(input!='\n'){
		input=getchar();
		zifu[i]=input;
		i++;	
	}
	
	for(int t=0;t<i-1;t++){
		num[t]=(int)zifu[t];
		zero=num[t]&0x15;  //取出0，2，4位
		one=num[t]&0x2a;  //取出1，3，5位
		n[t]=num[t]>>6;
		qianliangwei[t]=num[t]&0xc0;
		num[t]=(num[t]&0xc0)|((one>>1)|(zero<<1));  //取原num的前两位并与新组成的后六位取“或”
		
//		printf("%d",n[t]);
//        printf("%d %d %d %d\n",zero,one,num[t],qianliangwei[t]);	
	}
	
	for(int k=0;k<i-1;k++){
		
		if(n[k]==0){
			printf("%c",num[k]);
			continue;
		}
		
		else{
			num[k]=(num[k]&0x3f)<<n[k];  //取出后六位之后向左移n[k]位（也就是左移1位）（移位数只能是0或1）
            num[k]=((((num[k]&0x40)>>6)|num[k])&0x3f)|qianliangwei[k];  //num[k]先取第6位，然后向右移动6位，与之前左移得到的num[k]取或（达到循环左移的目的）。将得到的新数再取后六位，与上一个循环中的得到的前两位取或
            printf("%c",num[k]);
		}
		
	}
	return 0;
} 
