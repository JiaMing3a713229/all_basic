#include<stdio.h>    //導入標頭檔 
#include<stdlib.h>
int main(void){
	char name[100];  //建立char陣列 
	int i=0;         //建立int變數=0
	char option;
	while(true){
		printf("輸入字串\n");
		scanf("%s",&name);  //keyin字串 
		while(i<100&&name[i]>=65){               //大小寫轉換 
			if(name[i]>=65&&name[i]<=90){  //A-Z
				name[i]+=32;
				printf("%c",name[i]);
			}
			else if(name[i]>=97&&name[i]<=122){  //a-z
				name[i]-=32;
				printf("%c",name[i]);
			}
			i++;
		}
		printf("\n");
		i=0;
	} 
	
	
} 
