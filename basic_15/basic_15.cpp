#include<stdio.h>    /*導入函式庫*/ 
#include<stdlib.h>
void isLate(int,int);/*isLate()的原型*/ 
int main(void){      /*主程式*/ 
	int h,m;         /*建立int變數 h小時 m分鐘*/ 
	printf("請輸入時間");
	scanf("%d %d",&h,&m);
	isLate(h,m);
}
void isLate(int h,int m){
	if(h>=7&&h<17){
		if(h==7&&m>=30){    /*7:30為上課時間*/ 
			printf("現在是上課時間");
			printf("時間%d:%d",h,m);
		}
		else if(h>7){       /*8:00~17:00為上課時間*/ 
			printf("現在是上課時間");
			printf("時間%d:%d",h,m);
		} 
		
	}
	else{
		printf("下課囉");
	}
	
}
