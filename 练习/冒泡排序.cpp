#include<stdio.h>
int main(void)
{
	char names[]={'A','B','C'};
	int scores[3];
	for(int i=0;i<=2;i++){
		scanf("%d",&scores[i]);
	}
	
	int s=0;//中间变量
	char c;//中间变量
	if(scores[1]==scores[0]&&scores[1]==scores[2]){
		printf("%c %d",names[0],scores[0]);
	}
	else{
	
	for(int i=2;i>0;i--){
		for(int t=0;t<i;t++){
			if(scores[t]<scores[t+1]){
				s=scores[t];
				scores[t]=scores[t+1];
				scores[t+1]=s;
				c=names[t];
				names[t]=names[t+1];
				names[t+1]=c;
			}
		}
	}
	if(scores[0]==scores[1]){
		printf("%c %d",names[0],scores[0]);
	}
	else{
	    printf("%c %d",names[1],scores[1]);
	}
	
		
   
    }



	return 0;
}
