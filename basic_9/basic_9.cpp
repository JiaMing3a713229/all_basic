#include<stdio.h>                         //導入標頭檔 
#include<stdlib.h>
int main(void){
	for(int i=1;i<10;i++)                 //執行j*1-9 
		for(int j=1;j<10;j++){            //執行1-9*i
			printf("%2d*%1d=%2d",j,i,j*i);
			printf("   ");
			if(j==9){                     //j=9換行 
				printf("\n");
			}
		}
}
