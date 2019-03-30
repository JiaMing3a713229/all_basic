#include<stdio.h>
#include<stdlib.h>
int main(void){
	int n;    //n項 
	int sum=0;//建立int變數sum總和 
	printf("輸入n:\n");
	scanf("%d",&n);
	sum=(n*(1+n))/2;   //總和公式n(1+n)/2 
	printf("總和:%d\n",sum);
	system("pause");
	return 0;
} 
