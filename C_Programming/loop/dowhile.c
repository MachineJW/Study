// 반복문 do while 
// do while은 선실행 후 조건
// while은 조건 후 실행 
#include <stdio.h>

void main(){
	int x = 0;
	int y = 0;
	int i;
	
	printf("do~while");
	do { // do(실행문)을 먼저 실행한다. 즉,적어도 한번은 실행. 
	    printf("x실행\n"); 
		x++;	
	} while(x<=5); // 조건이 맞는지 파악. 
	printf("END\n");
	printf("\n");
	
	printf("while");
	while(y<=5){ // 조건이 먼저 맞는지 파악. 
		printf("y실행\n");
		y++;
	}
	printf("END\n");
	printf("\n");
	
	printf("보너스for문\n"); 
		for(i=0;i<=5;i++) { // for(1;2;3;){ 루프 실행문 } 1:초깃값, 2:조건식, 3:조건값 변경(루프가 한번 끝날때 마다 실행) 
		printf("for실행\n");
	}
	printf("END\n");
	 
}
