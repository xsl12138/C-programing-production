//�ж�������ַ����Ƿ�����ֻ�����ĸ�ʽ
//�ж����������ȼ�Ϊ�����ȺϷ�>ÿһλ��������>��һλ�Ϸ�>�ڶ�λ�Ϸ���
//����Ӧ��ѭ�������û������룬ֱ������Ctrl+Z������
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
			printf("���Ȳ��Ϸ�\n");
			i=0;
			continue;
		}
		else if( c =='\n'){
			for(int i=0;i<=10;i++){
				if(num[i]<48||num[i]>57){
					printf("�ַ����д��ڷ������ַ�\n");
					break;
				}
				else if((a!='1')&&(i==10)){
				    printf("��1λ���Ϸ�\n");
				    
				    break;
			    }
			    else if((b=='1'||b=='2'||b=='6'||b=='9'||b=='0')&&(i==10)){
				    printf("��2λ���Ϸ�\n");
				    
				    break;
			    }
			}
			i=0;
			
			continue;
				
		}
	
		
    }

	return 0;
	
}
