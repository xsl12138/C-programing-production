#include<stdio.h>
#include<math.h>
int main()
{
	double gongzi=0;
	scanf("%lf",&gongzi);
	if(gongzi<=1000){
		printf("0");
	}
	else if(gongzi>1000&&gongzi<=2000){
		printf("%.0lf",(gongzi-1000)*0.05);
	}
	else if(gongzi>2000&&gongzi<=3000){
		printf("%.0lf",(gongzi-1000)*0.05+(gongzi-2000)*0.1);
	}
	else if(gongzi>3000&&gongzi<=4000){
		printf("%.0lf",(gongzi-1000)*0.05+(gongzi-2000)*0.1+(gongzi-3000)*0.15);
	}
	else if(gongzi>4000&&gongzi<=5000){
		printf("%.0lf",(gongzi-1000)*0.05+(gongzi-2000)*0.1+(gongzi-3000)*0.15+(gongzi-4000)*0.2);
	}
	else{
		printf(".0lf",(gongzi-1000)*0.05+(gongzi-2000)*0.1+(gongzi-3000)*0.15+(gongzi-4000)*0.2+(gongzi-5000)*0.25);
	}
	return 0;
}
