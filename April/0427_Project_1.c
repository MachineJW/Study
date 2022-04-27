#include<stdio.h> // printf,scanf
#include<time.h> // time 
#include<stdlib.h> // srand, rand


int random();
int rand1,rand2,rand3,rand4; // 어떠한 함수에서도 사용가능하게 전역변수 선언... 


void main()
{
	int i;
	int num[4] ;
	printf("[JW_숫자야구]_ver1.0");
	printf("\n서로 다른 4자리 랜덤 한 숫자를 배치 중입니다.\n");
	random();
	int random[4] = {rand1,rand2,rand3,rand4};
	for(i=0;i<4;i++)
	{
		printf("[%d]",random[i]);
	}
	printf("\n랜덤한 4자리 수가 배치되었습니다. 서로 다른 4자리 정수를 입력하세요");
		
		
		
	for(i=0;i<4;i++)
	{	
		input:
			printf("\n%d번째에 들어갈수 를 입력:",i+1);
			scanf("%d",&num[i]);
		
		if (num[i]>=10)
		{	
			printf("숫자 1 자리를 다시 입력하세요.");
			goto input; 
		}
		
		else if (num[0]==0)
		{
			printf("첫번째 자리는 0 이 올 수 없습니다. 다시 입력하세요.");
			goto input; 
		}
           
	}
	
	
	
	
	
	
}

int random()
{
	int i;
	int j;
	srand(time(NULL));
	
	while(rand1==rand2||rand1==rand3||rand1==rand4||rand2==rand3||rand2==rand4||rand3==rand4)
	{
		rand1=rand()%9+1;
		rand2=rand()%9; 
		rand3=rand()%9; 
		rand4=rand()%9; 	
	}
	
	return;
}
