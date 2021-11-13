#include<stdio.h>
int main(void)
{
	int nums[5],q=0;
	while(q<=4){
		scanf("%d",&nums[q]);
		q++;
	}
	
	for(int i=0;i<5;i++){
		for(int j=i;j<5;j++){
			if(nums[i]>nums[j]){
				int temp=nums[i];
				nums[i]=nums[j];
				nums[j]=temp;
			}
		}
	}
	printf("由小到大排序：\n") ;
	for(int i=0;i<5;i++){
		printf("第%d个数是：%d\n",i+1,nums[i]);
		
	}
	return 0;
	getchar();
}
