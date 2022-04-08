#include<stdio.h>

void main(){
	//printf()
	char i = 'A';
	int j = 0;
	for(j;j<26;j++){
		printf("%c, ",i+j);
		if(j%5==4){
			printf("\n");
		}
	}
	
}
