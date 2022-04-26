#include<stdio.h>

void CharAry1();
void CharAry2();

void main()
{
	CharAry1();
	CharAry2();		
}

void CharAry1()
{
	char name[5][20]; // 2차원 문자열 배열 선언 "20크기의 문자열 5개" 5행 20열 
	int i,cnt;
	
	cnt = sizeof(name)/sizeof(name[0]); // 행의 갯수, 전체 배열 바이트  나누기 배열의 한 요소 바이트 = 5바이트 
	
	for(i=0;i<cnt;i++)
	{
		printf("문자열 입력:");
		scanf("%s",name[i]);
	}
	
	for(i=0;i<cnt;i++)
	{
		printf("\n[%s]",name[i]);
	}
}

void CharAry2()
{
	char OSI[7][20];
	
	int i,cnt;
	
	cnt = sizeof(OSI)/sizeof(OSI[0]);
	
	for(i=0;i<cnt;i++)
	{
		printf("[%d]계층 명칭 입력:",i+1);
		scanf("%s",OSI[i]);
	}
}
