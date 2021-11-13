//#include<stdio.h>
//int main(void)
//{
//	double x;
//	scanf("%lf",&x);
////	x=(int)x;
////	printf("%.0f",x);
//
//
////  x=x/1;
////  printf("%.0f",x);
//    return 0;
//    
//    
//    
//}

//以下代码无误 
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	double x;
	scanf("%lf",&x);
	if(x>=0){
		x=floor(x);
	}
	else x=ceil(x);
	printf("%.0f",x);
	return 0;
}

