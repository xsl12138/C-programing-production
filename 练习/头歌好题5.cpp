//C���Գ������ʵ��64ҳ��13��
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
	char input,zifu[100];
	int i=0,num[100]={0},zero=0,one=0,qianliangwei[100];
	int n[100]={0};  //ѭ�����Ƶ�λ��
	
	while(input!='\n'){
		input=getchar();
		zifu[i]=input;
		i++;	
	}
	
	for(int t=0;t<i-1;t++){
		num[t]=(int)zifu[t];
		zero=num[t]&0x15;  //ȡ��0��2��4λ
		one=num[t]&0x2a;  //ȡ��1��3��5λ
		n[t]=num[t]>>6;
		qianliangwei[t]=num[t]&0xc0;
		num[t]=(num[t]&0xc0)|((one>>1)|(zero<<1));  //ȡԭnum��ǰ��λ��������ɵĺ���λȡ����
		
//		printf("%d",n[t]);
//        printf("%d %d %d %d\n",zero,one,num[t],qianliangwei[t]);	
	}
	
	for(int k=0;k<i-1;k++){
		
		if(n[k]==0){
			printf("%c",num[k]);
			continue;
		}
		
		else{
			num[k]=(num[k]&0x3f)<<n[k];  //ȡ������λ֮��������n[k]λ��Ҳ��������1λ������λ��ֻ����0��1��
            num[k]=((((num[k]&0x40)>>6)|num[k])&0x3f)|qianliangwei[k];  //num[k]��ȡ��6λ��Ȼ�������ƶ�6λ����֮ǰ���Ƶõ���num[k]ȡ�򣨴ﵽѭ�����Ƶ�Ŀ�ģ������õ���������ȡ����λ������һ��ѭ���еĵõ���ǰ��λȡ��
            printf("%c",num[k]);
		}
		
	}
	return 0;
} 
