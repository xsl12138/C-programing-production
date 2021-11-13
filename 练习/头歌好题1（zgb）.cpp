#include<stdio.h>
#include<math.h>
int judge(int x)
{
    int i=sqrt(x);
    if(x==i*i) return 1;
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=1;
    while(1)
    {
        int y=x*x;
        if(y>n) break;
        for(int i=1;i<=x;i++)
        {
            int sub=y-i*i*10;
            int ans=sqrt(sub);
            if(judge(sub)){
                printf("%d=%d*%d=%d*%d*10+%d*%d\n",y,x,x,i,i,ans,ans);
                break;
            }
        }
        x++;
    }
}
