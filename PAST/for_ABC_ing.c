#include<stdio.h>

void main(){
	printf("[����]\n"); 
	char x,y,z;
	for(x='A';x<='Z';x++){
		printf("%c",x);
	}
	
	printf("\n[����]");
	for(y='A';y<='Z';y++){
		printf("\n%c",y);
	}
	char i,j;
	printf("\n[���� ����]\n");
	for(i='A';i<='Z';i++){
		for(j='A';j<='Z';j++){
			printf("%c",j);
		}
		printf("%c\n",i);
		printf("\n");
	}
}
