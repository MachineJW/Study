//goto ¹®
#include<stdio.h>

void main (){
	int x=0,sum=0;

loop:
	x++;
	sum+=x;
	
	if(x<100){
		goto loop;
	}	
	
	printf("%d",sum);
} 
