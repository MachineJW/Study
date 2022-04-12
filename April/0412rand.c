#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*과제: 10~3000,100~400등 임의의 값 랜덤으로 찍기, scnaf로 값을 입력받아 1~입력값 랜덤으로 찍기
두 값 중 작은수~ 큰수 사이 랜덤으로 찍기*/
void main(){
	//rand의 기본범위는 0~32367이다. 즉 rand함수의 반환값. 
	int rand1,rand2,rand3;
	long i; // 궁금해서  그냥 써봄, int와 같음 4바이트 정수형 
	srand(time(NULL)); // 매개변수로 현재 시간을 받아 초기화해 준다.  
	
	for(i=0;i<100;i++){
		rand1=rand()%2901+10; //%의 의미는 어떤 수를 나누었을때의 나머지,어떤 임의의 수를 a로 나눈 나머지는 항상 a보다 작다.  
		// 공식사용: a~b까지 일때, rand()%(b-a+1)+a; 
		printf("1~3000까지의 랜덤 값%d:%d\n",i,rand1); 
	}
	
	// scanf로 값입력 받아 1~ 입력 값
	int x;
	printf("1부터 몇까지의 수를 랜덤하게 찍어볼까요?:");
	scanf("%d",&x);
	
	for(i=1;i<=100;i++){
		rand2=rand()%x+1;
		printf("[%d]",rand2);
		if(i%10==0){//만약 i를  10으로  나눈 나머지가  0 이라면... 
			printf("\n");//줄바꿈
		}
	}
	
	// scnaf로 값 입력 받아서 두 값 중 작은 수 ~ 큰수 사이 랜덤으로 찍기
	int min,max,k,m;
	
	loop: 
		printf("\n[두 값중 작은 수 ~ 큰수 사이 랜덤으로 찍기]\n첫번째 값을 입력해주세요:");
		scanf("%d",&k);
		printf("두번째 값을 입력해주세요:");
		scanf("%d",&m);
	//들어온 두값을 비교하여 최대 최소 범위 지정 
	if(k>m){
		min=m;
		max=k;
	}
	else if (k<m){
		min=k;
		max=m;
	}
	else { // 예외처리를 고민하다가.....즉 두 값이 같을경우... 
		goto loop; // goto문을 한번 사용해 보았다. 
	}
	for(i=1;i<=100;i++){
		rand3=rand()%(max-min-1)+min;
		printf("[%d]",rand3);
		if(i%10==0){//만약 i를  10으로  나눈 나머지가  0 이라면... 
			printf("\n");//줄바꿈
		}
}
}
