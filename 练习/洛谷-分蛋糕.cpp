 //1号小朋友先分糖，再收到2号和5号的糖；
 //2，3，4号小朋友先收到前一位的糖，再分糖，再收到后一位的糖；
 //5号小朋友先收到1号和4号的糖，再分糖；
 //2，3，4号可放入循环，1号5号单独计算； 
 #include<stdio.h> 
 int main(void)
 {
 	int nums[5];  
 	int shang=0,eat=0,special=0;  //定义shang为每人糖果除以3所得商，special为1号的初始糖果除以3得到的商（用于计算5号分糖前的糖果数） 
 	for(int i=0;i<=4;i++){
 		scanf("%d",&nums[i]);  //输入5个糖果数 
	 }
	 
//	 special=int(nums[0]/3);
	 
	 for(int i=0;i<=4;i++){
	 	
	 	if(i==0){  //第一次循环 
		 	special=int(nums[i]/3);  //计算special（用于保留1号小朋友最开始除得的商，用于计算5号分糖前的糖果数） 
		 }
//		 printf("%d",special);
		 
	 	if(i<=3){  //前4次循环 
	 		nums[i]=nums[i]+shang;  //计算1至4号小朋友分糖前糖果数 
	 		shang=int(nums[i]/3);  //计算1至4号小朋友给自己留下（给两侧小朋友）的糖果数 
            eat=eat+(nums[i]-shang*3);  //每一次循环，用前面的eat加上本次循环所得的shang 
	 		nums[i]=int(nums[i]/3);  //计算1至4号小朋友分完后自己所剩的糖 
		 }		 
		 
		 if(i==4){  // 第五次循环（5号小朋友分糖） 
		 	nums[i]=nums[i]+shang+special;  //计算5号小朋友分糖前的糖果数（注意第四次循环时有获得一个shang，此为4号分给5号的糖果数） 
		 	shang=int(nums[i]/3);  
            eat=eat+(nums[i]-shang*3);  //每一次循环，用前面的eat加上本次循环所得的shang 
		 	nums[i]=int(nums[i]/3);  //5号小朋友分完后自留糖果数 	
		 }
		 
		 if(i>=1){  //第二次循环起 
		 	nums[i-1]=shang+nums[i-1];  //计算上一位小朋友最终得到的糖果数（上一位小朋友自己留下的 + 目前位小朋友分给上一位的） 
		 }
		
	 }
	 
//	 printf("%d %d %d %d %d %d",nums[0],nums[1],nums[2],nums[3],nums[4],special);

	 nums[0]=nums[0]+shang;  //1号小朋友，用循环得到的nums[0]加上5号所得的shang 
	 int t=0;  //循环数t 
	 while(t<=4){
	 	printf("%d ",nums[t]);
	 	t++;
	 } 
	 printf("\n");
	 printf("%d",eat);

	 return 0;
	 getchar();
 } 
	
