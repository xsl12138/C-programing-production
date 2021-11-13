//C语言程序设计实验64页第10题
#include<stdio.h>
int main(void)
{
	char c;
    int zishu=0,zifu=0,hangshu=0;
    while((c=getchar())!=EOF){
    	if(c=='\n'){  //若为换行符 
    		hangshu++;
    		continue;
		}
		else if( (c<65||(c>90&&c<97)||c>122)&&c!=32&&c!='\t' ){  //若为汉字  //此处有疑问（汉字的ASCII码值是否一定不与英文字母重合？） 
			zishu++;
			zifu++;
			c=getchar();
//			c=getchar();
			continue;
		}
		else{  //若不是换行符也不是汉字 
			if(c!=32){
				while(c!=32){
				    zifu++;
				    c=getchar();
				    if( c==32 || c=='\n' ){
				    	if(c=='\n'){
				    		hangshu++;
						}
					    break;
				    }
			    }
			    zishu++;
			}
			
		}
	}
	
	printf("字数 %d\n",zishu);
	printf("字符数 %d\n",zifu);
	printf("行数 %d\n",hangshu);
	
	return 0;
}
