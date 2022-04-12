#include<stdio.h>

void main(){
	printf("[가로]\n"); 
	char x,y,z;
	for(x='A';x<='Z';x++){
		printf("%c",x);
	}
	
	printf("\n[세로]");
	for(y='A';y<='Z';y++){
		printf("\n%c",y);
	}
	char i,j;
	printf("\n[세로 정렬]\n");
	for(i='A';i<='Z';i++){
		for(j='A';j<='Z';j++){
			printf("%c",j);
		}
		printf("%c\n",i);
		printf("\n");
	}
}
