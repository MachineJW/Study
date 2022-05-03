#include<stdio.h> // printf,scanf
#include<time.h> // time 
#include<stdlib.h> // srand, rand


int random();
int rand1,rand2,rand3,rand4; // 어떠한 함수에서도 사용가능하게 전역변수 선언... 


void main()
{
	int i,j;
	int num[4] ;
	int cnt = 0;
	int st ;
	int ball ;
	
	printf("[JW_숫자야구]_ver1.0");
	printf("\n서로 다른 4자리 랜덤 한 숫자를 배치 중입니다.\n");
	random();
	int random[4] = {rand1,rand2,rand3,rand4};
	for(i=0;i<4;i++)
	{
		printf("[%d]",random[i]);
	}
	while((int)num[0]!=(int)random[0]||(int)num[1]!=(int)random[1]||(int)num[2]!=(int)random[2]||(int)num[3]!=(int)random[3])
	{	
		cnt++;
	
		printf("\n%d번째 도전!",cnt);
		printf("\n랜덤한 4자리 수가 배치되었습니다. 서로 다른 4자리 정수를 입력하세요");
		for(i=0;i<4;i++)
		{	
			loop:
		 		printf("\n%d번째에 들어갈 숫자 입력:",i+1);
				scanf("%d",&num[i]);
			
			if (num[i]>9||num[i]<0)
			{
				printf("\n주의:9이상 또는 음수를 입력하지마세요!");
				goto loop; 
			}
			else if(i==0&&num[0]<=0)
			{
				printf("\n주의:첫번째 자리는 0이 될 수 없습니다.다시 입력하세요");
				goto loop;
			}
			
			switch (i)
			{
				case 1:
					if(num[0]==num[1])
					{
						printf("\n주의:중복된 값은 입력 될 수 없습니다.다시 입력하세요");
						goto loop;	
					}
					break; 
				case 2:
					if(num[2]==num[1]||num[2]==num[0])
					{
						printf("\n주의:중복된 값은 입력 될 수 없습니다.다시 입력하세요");
						goto loop;
					}
					break;
				case 3:
					if(num[3]==num[2]||num[3]==num[1]||num[3]==num[0])
					{
						printf("\n주의:중복된 값은 입력 될 수 없습니다.다시 입력하세요");
						goto loop;
					}
					break;
			}
			
		}
		
		for(i=0;i<4;i++)
		{
			printf("[%d]",num[i]);
		}
		
		st = 0;
		ball = 0;
		// 갯수 파악 
		for(i=0;i<4;i++)
		{
			if((int)num[i]==(int)random[i])
			{
				st++;
			}
			
			for(j=i+1;j<4;j++)
			{
				if((int)num[i]==(int)random[j])
				{
					ball++;
				}
			}
			
			for(j=i-1;j<-4;j--)
			{
				if((int)num[i]==(int)random[j])
				{
					ball++;
				}
			}
		}
		
		
		printf("\n[%d]스트라이크,[%d]볼",st,ball);
	}
	printf("\n클리어!! %d번 시도",cnt);
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

/*
arr[4] = { 1, ,2 , 3 , 4} ;

int 자리수 = (sizeof) arr / sizeof (arr[0]
sum = 0
for(int i = 0 ; i < 자리수  ; i++) {
	sum += arr[i] + 10(진수값) ^ (자리수 - i - 1) 
}
print ( sum )

*/
