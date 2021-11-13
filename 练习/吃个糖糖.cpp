#include "stdio.h"
#include "stdlib.h"

#ifndef debug
#define num 5
#endif

//int main(void){
//	int *a = (int*)malloc((num+5)*sizeof(int));
//	int *f = (int*)malloc((num+5)*sizeof(int));
//	for(int h = 0;h <6;h++){
//		a[h] = 0;
//		f[h] = 0;
//	}
//	scanf("%d%d%d%d%d",&a[1],&a[2],&a[3],&a[4],&a[5]);
//	for(int b = 1;b <6;b++){
//		f[b]=a[b] % 3;
//		a[b] -= f[b];
//		a[b] = a[b] / 3;
//		a[(b % num)+1] += a[b];
//		if(b == 1){
//		a[5] += a[b];
//	}else{
//		a[b-1] += a[b];
//	}
//	}
//	for(int x=1;x<num+1;x++){
//	
//	printf("%d ",a[x]);
//    }
//    printf("\n");
//      printf("%d",a[1]+a[2]+a[3]+a[4]+a[5]);
//}
//int *a = (int*)malloc((num+5)*sizeof(int));
//int *f = (int*)malloc((num+5)*sizeof(int));
int a[num+2];
int f[num+2];
typedef struct tang{
	int no;
	struct tang *next;
	struct tang *last;
}tangt;
tangt *head,*node,*end,*before;
tangt *start(int x){
	head =(tangt*)malloc(sizeof(tangt));
	before = head;
	end = head;
	for(int i=0;i<x-1;i++){
		node =(tangt*)malloc(sizeof(tangt));
	if(i==0){
		end->no = a[i+1];
		end->next = node;
		end = node;
	}else{
		end->no = a[i+1];
		end->last = before;
		before = end;
		end->next = node;
		end = node;
	}
	}
	end->last = before;
	end->no = a[x];
	end->next = head;
	head->last = end;
	return head;
} 
int main(void){
	scanf("%d%d%d%d%d",&a[1],&a[2],&a[3],&a[4],&a[5]);
	int x = num;
	int sum;
	start(x);
	tangt *t =end;
	tangt *t1,*t2;
	for(int y=1;y<num+1;y++){
		int g=1;
		while(g<=y){
			t = t->next;
			g++;
		}
		f[y] = (t->no) % 3;
		t->no -= f[y];
		sum += f[y];
		t1 = t->next;
		t2 = t->last;
		t2->no +=((t->no)/3); 
		t1->no +=((t->no)/3); 
		t->no = (t->no) / 3; 
		t = end;
	}
	t = end;
	for(int j=0;j<num;j++){
		t=t->next;
		printf("%d ",t->no);
	}
	printf("\n");
	printf("%d",sum);
}
