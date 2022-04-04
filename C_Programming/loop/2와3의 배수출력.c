//1부터100까지 수 중에서 2또는 3의 배수 모두를 출력하는 프로그램을 while을 이용하여 작성하라.
//단,한줄에 10개씩의 데이터를 출력한다. 2,3,4,6,8,9,10.....
#include<stdio.h>

void main(){
	int cnt = 1;
	int dnt = 0;
	printf("[While]\n");
	while(1){
		if (cnt%2 == 0){ //2로 나누어 나머지가 없으면 
			printf("[%d]",cnt);
			dnt++;
		}
		else if (cnt%3 == 0){//3으로 나누어 나머지가 없으면 (중복된 숫자를 피하기위해 else if) 
			printf("[%d]",cnt);
			dnt++;
		}
        if(dnt == 10){ //줄바꿈 조건. 
    	printf("\n");
    	dnt = 0;
	    }
    	if(cnt == 100){ // 반복문을 돌리다가 cnt가 100이 되면 break로 while문 탈출 
			break; 
		}
	cnt++;
	}
	
	printf("\n");
	printf("[For]\n");
	dnt=0; //for문에 재활용하기위해 다시 0으로.. 
	for(cnt=1;cnt<=100;cnt++){
		if(cnt%2==0){
			printf("[%d]",cnt);
			dnt++;
		}
		else if(cnt%3==0){
			printf("[%d]",cnt);
			dnt++;
		}
		if(dnt==10){
			printf("\n");
			dnt=0;
		}
	}
}  
