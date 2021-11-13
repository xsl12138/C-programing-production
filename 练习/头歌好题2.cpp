//判断输入的字符串是否符合手机号码的格式
//判断条件的优先级为：长度合法>每一位都是数字>第一位合法>第二位合法。
//程序应能循环接受用户的输入，直至输入Ctrl+Z结束。
#include<stdio.h>
int main(void)
{
	int sum=0,i=0;
	char num[20];
	char a,b,c;
	//c=getchar();
	while(c != EOF){
			c=getchar();
		num[i]=c;
		i++;
		if(i==1){
			a=c;
		}
		if(i==2){
			b=c;
		}
		if( i!=12 && c =='\n' ){
			printf("长度不合法\n");
			i=0;
			continue;
		}
		else if( c =='\n'){
			for(int i=0;i<=10;i++){
				if(num[i]<48||num[i]>57){
					printf("字符串中存在非数字字符\n");
					break;
				}
				else if((a!='1')&&(i==10)){
				    printf("第1位不合法\n");
				    
				    break;
			    }
			    else if((b=='1'||b=='2'||b=='6'||b=='9'||b=='0')&&(i==10)){
				    printf("第2位不合法\n");
				    
				    break;
			    }
			}
			i=0;
			
			continue;
				
		}
	
		
    }

	return 0;
	
}
