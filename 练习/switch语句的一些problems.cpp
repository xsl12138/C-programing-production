#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
//int main(void)
//{
//	int month=0;
//	scanf("%d",&month);
//	switch(month){
//		case 4:
//		case 5: 
//		case 3:printf("����\n");
////		break;
//		
//		case 12:
//		case 1:
//		case 2:printf("����\n");
////		break;
//		
//		case 6:
//		case 7:
//		case 8:printf("�ļ�\n");
////		break;
//		
//		case 9:
//		case 10:
//		case 11:printf("�＾\n");
////		break;
//		
//		default:printf("default USB\n");
////			break;
//		}
//		printf("USB\n"); 
//	 
//	return 0;
//}

//

int main(void)
{
	int i;
	scanf("%d",&i);
	switch(i){
		case 0:printf("%d\t",i);
		default:
			printf("%d\t",++i);  //����default����ʲôλ�ã��������ִ�У��������� 
		case 1:printf("%d\t",i);
		case 2:printf("%d\t",i);
		case 3:printf("%d\t",i);
	}
	return 0;
}

