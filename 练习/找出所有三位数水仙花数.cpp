#include<stdio.h>
//int isNarcissus(int m);  //�Ա����ú���������
int main(void)
{
	int x,i,j,k;
//	for(isNarcissus(x)){}  //�����·�����ĺ���
	for(x=100;x<=999;x++){
		i=x/100;
		j=(x-i*100)/10;
		k=x%10;
		if(x==i*i*i+j*j*j+k*k*k){
			printf("%5d",x);
		}
	}
	return 0;
}

//int isNarcissus(int m)  //���ж��Ƿ�Ϊˮ�ɻ����ķ�������ɺ���
//{
//	int i,j,k;
//	i=m/100;
//	j=(m-i*100)/10;
//	k=m%10;
//	if(m==i*i*i+j*j*j+k*k*k) return 1;     
//	else return 0;
//}
