#include<stdio.h> // printf,scanf
#include<time.h> // time 
#include<stdlib.h> // srand, rand


int random();
int rand1,rand2,rand3,rand4; // ��� �Լ������� ��밡���ϰ� �������� ����... 


void main()
{
	int i;
	int num[4] ;
	printf("[JW_���ھ߱�]_ver1.0");
	printf("\n���� �ٸ� 4�ڸ� ���� �� ���ڸ� ��ġ ���Դϴ�.\n");
	random();
	int random[4] = {rand1,rand2,rand3,rand4};
	for(i=0;i<4;i++)
	{
		printf("[%d]",random[i]);
	}
	printf("\n������ 4�ڸ� ���� ��ġ�Ǿ����ϴ�. ���� �ٸ� 4�ڸ� ������ �Է��ϼ���");
		
		
		
	for(i=0;i<4;i++)
	{	
		input:
			printf("\n%d��°�� ���� �� �Է�:",i+1);
			scanf("%d",&num[i]);
		
		if (num[i]>=10)
		{	
			printf("���� 1 �ڸ��� �ٽ� �Է��ϼ���.");
			goto input; 
		}
		
		else if (num[0]==0)
		{
			printf("ù��° �ڸ��� 0 �� �� �� �����ϴ�. �ٽ� �Է��ϼ���.");
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
