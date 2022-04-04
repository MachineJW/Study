#include <stdio.h>
int main(){
	int number,d=1; 
	printf("정수 입력: ");
	scanf("%d",&number);
	printf("%d의 약수",number);
	while(number/2 >= d){ //number/2가 d보다 크면 while 반복문 실행 
		if(number%d == 0){
			printf("%d",d);
		}
		d++;
	}
	printf("%d\n",number);
	
}
