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
//		case 3:printf("春季\n");
////		break;
//		
//		case 12:
//		case 1:
//		case 2:printf("冬季\n");
////		break;
//		
//		case 6:
//		case 7:
//		case 8:printf("夏季\n");
////		break;
//		
//		case 9:
//		case 10:
//		case 11:printf("秋季\n");
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
			printf("%d\t",++i);  //无论default放在什么位置，总是最后执行？？？？？ 
		case 1:printf("%d\t",i);
		case 2:printf("%d\t",i);
		case 3:printf("%d\t",i);
	}
	return 0;
}

