 //1��С�����ȷ��ǣ����յ�2�ź�5�ŵ��ǣ�
 //2��3��4��С�������յ�ǰһλ���ǣ��ٷ��ǣ����յ���һλ���ǣ�
 //5��С�������յ�1�ź�4�ŵ��ǣ��ٷ��ǣ�
 //2��3��4�ſɷ���ѭ����1��5�ŵ������㣻 
 #include<stdio.h> 
 int main(void)
 {
 	int nums[5];  
 	int shang=0,eat=0,special=0;  //����shangΪÿ���ǹ�����3�����̣�specialΪ1�ŵĳ�ʼ�ǹ�����3�õ����̣����ڼ���5�ŷ���ǰ���ǹ����� 
 	for(int i=0;i<=4;i++){
 		scanf("%d",&nums[i]);  //����5���ǹ��� 
	 }
	 
//	 special=int(nums[0]/3);
	 
	 for(int i=0;i<=4;i++){
	 	
	 	if(i==0){  //��һ��ѭ�� 
		 	special=int(nums[i]/3);  //����special�����ڱ���1��С�����ʼ���õ��̣����ڼ���5�ŷ���ǰ���ǹ����� 
		 }
//		 printf("%d",special);
		 
	 	if(i<=3){  //ǰ4��ѭ�� 
	 		nums[i]=nums[i]+shang;  //����1��4��С���ѷ���ǰ�ǹ��� 
	 		shang=int(nums[i]/3);  //����1��4��С���Ѹ��Լ����£�������С���ѣ����ǹ��� 
            eat=eat+(nums[i]-shang*3);  //ÿһ��ѭ������ǰ���eat���ϱ���ѭ�����õ�shang 
	 		nums[i]=int(nums[i]/3);  //����1��4��С���ѷ�����Լ���ʣ���� 
		 }		 
		 
		 if(i==4){  // �����ѭ����5��С���ѷ��ǣ� 
		 	nums[i]=nums[i]+shang+special;  //����5��С���ѷ���ǰ���ǹ�����ע����Ĵ�ѭ��ʱ�л��һ��shang����Ϊ4�ŷָ�5�ŵ��ǹ����� 
		 	shang=int(nums[i]/3);  
            eat=eat+(nums[i]-shang*3);  //ÿһ��ѭ������ǰ���eat���ϱ���ѭ�����õ�shang 
		 	nums[i]=int(nums[i]/3);  //5��С���ѷ���������ǹ��� 	
		 }
		 
		 if(i>=1){  //�ڶ���ѭ���� 
		 	nums[i-1]=shang+nums[i-1];  //������һλС�������յõ����ǹ�������һλС�����Լ����µ� + ĿǰλС���ѷָ���һλ�ģ� 
		 }
		
	 }
	 
//	 printf("%d %d %d %d %d %d",nums[0],nums[1],nums[2],nums[3],nums[4],special);

	 nums[0]=nums[0]+shang;  //1��С���ѣ���ѭ���õ���nums[0]����5�����õ�shang 
	 int t=0;  //ѭ����t 
	 while(t<=4){
	 	printf("%d ",nums[t]);
	 	t++;
	 } 
	 printf("\n");
	 printf("%d",eat);

	 return 0;
	 getchar();
 } 
	
