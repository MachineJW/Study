//임의의 양의 정수를 입력하여 최댓값과 최솟값을 구하고, 입력된 데이터의 개수를 구하는 프로그램을 작성
// 데이터  입력을 끝내려면 음수 입력 
#include<stdio.h>

void main(){
	int max,min,x;
	int cnt = 0;
	 while(1){
	 	printf("값을 입력하세요 : ");
	 	scanf("%d",&x);
	 	if(x<0){
	 		break;//음수값이 들어오면 루프문을 빠져나감 
		 }
		
	 	if(max<x){
	 		max = x;
		 }
		 
		if(min>x|cnt==0){
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
