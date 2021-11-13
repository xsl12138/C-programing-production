#include<stdio.h>
//方法一 数组、for循环 
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
	printf("累加和:%d\n",sum);
	printf("平均值:%.1f\n",ave);
	
	return 0;
	getchar();
}

//方法二 整数、for循环 
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
//	printf("累加和:%d\n",sum);
//	printf("平均值:%.1f\n",ave);
//	
//	return 0;
//	getchar();
//}

//方法三 数组、while循环 
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
//	printf("累加和:%d\n",sum);
//	printf("平均值:%.1f\n",ave);
//	
//	return 0;
//	getchar();
//}

//方法四 整数、while循环 
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
//	printf("累加和:%d\n",sum);
//	printf("平均值:%.1f\n",ave);
//	
//	return 0;
//	getchar();
//} 
