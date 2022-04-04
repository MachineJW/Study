//scanf 문자열이 들어왔을 경우, 예외 처리 
#include<stdio.h>

void main(){
	int x;
	printf("숫자만_입력하세요:");
	while(scanf("%d",&x)<=0){ //반환 값을 체크0 
		printf("\n경고!!정수를 다시 입력하세요:");
		fflush(stdin); //입력버퍼(stdin)을 비우라는 명령,stdin은 표준입력장치 
	}
	
		printf("\n당신이_입력한_값은 ");
		printf("%d",x);
		printf(" 입니다."); 
	
}
 
