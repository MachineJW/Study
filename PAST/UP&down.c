//전처리 
#include<stdio.h> //표준입출력함수가 정의되어있는 헤더파일 
#include<stdlib.h>//난수발생함수가 정의되어있는 헤더파일 
#include<time.h>//난수발생초기화 함수는 주로 time을 매개변수로 사용한다.time 함수가 정의되어있는 헤더파일을 불러온다. 

//main 함수 
void main(){
	printf("[UP&DOWN]");
	int i;
	int cnt = 0;  
	int num ;
	
	srand(time(NULL)); //srand은 난수발생 초기화 함수,time은 시간에 대한 정보로서 현재까지 흐른 시간을 초 단위로 반환한다.
	//만약 현재까지 흐른 시간을 구하려면 time에 NULL을 전달하고 값을 반환받을 수 있다. 
	num = rand()%100+1; // 난수발생범위 식: rand()%난수범위의_개수+시작_수 
	printf("\n생성된_난수:%d",num);	
	
	for(i=0;i!=num;cnt++){
	printf("\n%d번째도전",cnt); 
	printf("\n1~100중 숫자를 맞춰보세요:");
	scanf("%d",&i);
	if(i<num){
		printf("\n[UP]");
	}
	else if(i>num){
		printf("\n[DOWN]");
	}
	}
	printf("정답! 당신은 %d번 만에 클리어 하였습니다.",cnt);
} 
