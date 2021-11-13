//C语言程序设计实验   63页第8题 
#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>
int main(void)
{
	char a[100];
	char c,mid;
	int i=0,n=0;
	while(c!='\n'){
		c=getchar();
		a[i]=c;
		i++;
	}
	scanf("%d",&n);
	for(int k=0;k<i-1;k++){
		if((a[k]==44)||(a[k]==46)||(a[k]==32)){
			continue;
		}
		a[k]=a[k]+n-1;
		if(a[k]>65){
		
		    if(a[k]>90){
			    a[k]=a[k]-26;
		    }
	    }

	}
	for(int t=1;t<=i-2;t=t+2){
		mid=a[t];
		a[t]=a[t-1];
		a[t-1]=mid;
	}

	for(int k=0;k<=i;k++){
		printf("%c",a[k]);
	}	
	return 0;
} 
