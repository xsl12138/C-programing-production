#include "stdio.h"
#include "math.h"

int main(void){
    int num;
    scanf("%d",&num);
    int pf[101];
    int ce[10001]={0};
    int gg,ee;
    for(int i =1;i<=100;i++){
        pf[i]=i*i;
        ce[i*i]=1;
    }
    for(int j = 1;j<(int)(sqrt(num));j++){
         for(int u =1;u<(int)(sqrt((num/10.0)));u++){
            gg = j*j-u*u*10;
            if (gg<0){
                continue;
            }
            ee =(int)(sqrt(gg));
            if(ce[gg]==1){
                printf("%d=%d*%d=%d*%d*10+%d*%d\n",pf[j],j,j,u,u,ee,ee);
                break;
            }
            
         }
    }



}
