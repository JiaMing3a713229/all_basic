//3a713229 
#include <stdio.h>   //載入標頭檔 
#include <stdlib.h>   
int main(void){
	float h;
	float BMI,height,weight; //建立變數BMI,heigth(身高),weight(體重) 
	printf("請輸入身高:");
	scanf("%f",&height);
	printf("請輸入體重:");
	scanf("%f",&weight);
    h=(height/100);
	BMI=(weight/(h*h));  //BMI=體重的平方除以身高 
	printf("your BMI is:%f\n",BMI);//顯示BMI 
	system("pause");
	
}    
