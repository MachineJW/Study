//임의의 양의 정수를 입력하여 최댓값과 최솟값을 구하고, 입력된 데이터의 개수를 구하는 프로그램을 작성
// 데이터  입력을 끝내려면 음수 입력 
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
	
	 while(1){
	 	printf("값을 입력하세요 : ");
	 	scanf("%d",&x);
	 	if(x<0){
	 		break;//음수값이 들어오면 루프문을 빠져나감 
		 }
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
		 cnt++; 
	 }
	 
	printf("프로그램 종료! 입력된 데이터:");
	printf("%d",cnt); 
}
