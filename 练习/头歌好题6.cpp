//C���Գ������ʵ��64ҳ��10��
#include<stdio.h>
int main(void)
{
	char c;
    int zishu=0,zifu=0,hangshu=0;
    while((c=getchar())!=EOF){
    	if(c=='\n'){  //��Ϊ���з� 
    		hangshu++;
    		continue;
		}
		else if( (c<65||(c>90&&c<97)||c>122)&&c!=32&&c!='\t' ){  //��Ϊ����  //�˴������ʣ����ֵ�ASCII��ֵ�Ƿ�һ������Ӣ����ĸ�غϣ��� 
			zishu++;
			zifu++;
			c=getchar();
//			c=getchar();
			continue;
		}
		else{  //�����ǻ��з�Ҳ���Ǻ��� 
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
	
	printf("���� %d\n",zishu);
	printf("�ַ��� %d\n",zifu);
	printf("���� %d\n",hangshu);
	
	return 0;
}
