#include<stdio.h>
//����һ ���顢forѭ�� 
int main(void)
{
	int num[10];
	int sum=0;
	float t;
	float ave;
	for(int i=0;i<=9;i++){
		scanf("%d",&num[i]);
		if(num[i]>0) {
			sum=sum+num[i];
			t++;
		}
	}
	if(t==0) ave=0;
	else ave = (float)sum/t;
	printf("�ۼӺ�:%d\n",sum);
	printf("ƽ��ֵ:%.1f\n",ave);
	
	return 0;
	getchar();
}

//������ ������forѭ�� 
//int main(void)
//{
//	int num;
//	int sum=0;
//	float t;
//	float ave;
//	for(int i=0;i<=9;i++){
//		scanf("%d",&num);
//		if(num>0) {
//			sum=sum+num;
//			t++;
//		}
//	}
//	if(t==0) ave=0;
//	else ave = (float)sum/t;
//	printf("�ۼӺ�:%d\n",sum);
//	printf("ƽ��ֵ:%.1f\n",ave);
//	
//	return 0;
//	getchar();
//}

//������ ���顢whileѭ�� 
//int main(void)
//{
//	int num[10];
//	int sum=0,i=0;
//	float t;
//	float ave;
//    while(i<10){
//    	scanf("%d",&num[i]);
//    	if(num[i]>0){
//    		sum=sum+num[i];
//    		t++;
//		}
//		i++;
//	} 
//	if(t==0) ave=0;
//	else ave = (float)sum/t;
//	printf("�ۼӺ�:%d\n",sum);
//	printf("ƽ��ֵ:%.1f\n",ave);
//	
//	return 0;
//	getchar();
//}

//������ ������whileѭ�� 
//int main(void)
//{
//	int num;
//	int sum=0,i=0;
//	float t;
//	float ave;
//	while(i<10){
//		scanf("%d",&num);
//		if(num>0){
//			sum=sum+num;
//			t++;
//		}
//		i++;
//	}
//	if(t==0) ave=0;
//	else ave = (float)sum/t;
//	printf("�ۼӺ�:%d\n",sum);
//	printf("ƽ��ֵ:%.1f\n",ave);
//	
//	return 0;
//	getchar();
//} 
