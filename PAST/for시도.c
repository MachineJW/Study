#include<stdio.h>

void main(){
	int max,min,x,y; // 초기값을 비교해주기위해 y 추가  
	int cnt = 2;
	//초기값  
	printf("첫 번째 값을 입력하세요:");
	scanf("%d",&x);
	printf("두 번째 값을 입력하세요:");
	scanf("%d",&y);
	
	if (x<y){
		max=y;
		min=x;
	}
	
	else if (x>y){
		max=x;
		min=y;
	}
	printf("최대값:");
	printf("%d\n",max);
	printf("최솟값:");
	printf("%d\n",min);
	
	for(max,min;x>0;cnt++){
		printf("값을 입력하세요 : ");
	 	scanf("%d",&x);
	 	if(x<0)
	 		break;
	 	if(max<x){
	 		max = x;
		 }
		else if (min>x){
		 	min = x;
		 }
		 printf("최대값:");
		 printf("%d\n",max);
		 printf("최솟값:");
		 printf("%d\n",min);
	}
	printf("프로그램 종료! 입력된 데이터:");
	printf("%d",cnt);
}
