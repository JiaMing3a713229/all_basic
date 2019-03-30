//3a713229 
#include<stdio.h>//載入標頭檔 
#include<stdlib.h>
int main(void){
	int year;    //建立int year變數 
	printf("請輸入年份");
	scanf("%d",&year);//輸入year變數 
	//判斷是否為閏年 不是為平年 
	if((year%4==00&&year%100!=0)|year%400==0) { 
				printf("閏年");
			}
			else {
				printf("平年");
			}
			
}
