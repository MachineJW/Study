#include<stdio.h> // printf,scanf
#include<time.h> // time 
#include<stdlib.h> // srand, rand


int random();
int rand1,rand2,rand3,rand4; // ��� �Լ������� ��밡���ϰ� �������� ����... 


void main()
{
	int i,j;
	int num[4] ;
	int cnt = 0;
	int st ;
	int ball ;
	
	printf("[JW_���ھ߱�]_ver1.0");
	printf("\n���� �ٸ� 4�ڸ� ���� �� ���ڸ� ��ġ ���Դϴ�.\n");
	random();
	int random[4] = {rand1,rand2,rand3,rand4};
	for(i=0;i<4;i++)
	{
		printf("[%d]",random[i]);
	}
	while((int)num[0]!=(int)random[0]||(int)num[1]!=(int)random[1]||(int)num[2]!=(int)random[2]||(int)num[3]!=(int)random[3])
	{	
		cnt++;
	
		printf("\n%d��° ����!",cnt);
		printf("\n������ 4�ڸ� ���� ��ġ�Ǿ����ϴ�. ���� �ٸ� 4�ڸ� ������ �Է��ϼ���");
		for(i=0;i<4;i++)
		{	
			loop:
		 		printf("\n%d��°�� �� ���� �Է�:",i+1);
				scanf("%d",&num[i]);
			
			if (num[i]>9||num[i]<0)
			{
				printf("\n����:9�̻� �Ǵ� ������ �Է�����������!");
				goto loop; 
			}
			else if(i==0&&num[0]<=0)
			{
				printf("\n����:ù��° �ڸ��� 0�� �� �� �����ϴ�.�ٽ� �Է��ϼ���");
				goto loop;
			}
			
			switch (i)
			{
				case 1:
					if(num[0]==num[1])
					{
						printf("\n����:�ߺ��� ���� �Է� �� �� �����ϴ�.�ٽ� �Է��ϼ���");
						goto loop;	
					}
					break; 
				case 2:
					if(num[2]==num[1]||num[2]==num[0])
					{
						printf("\n����:�ߺ��� ���� �Է� �� �� �����ϴ�.�ٽ� �Է��ϼ���");
						goto loop;
					}
					break;
				case 3:
					if(num[3]==num[2]||num[3]==num[1]||num[3]==num[0])
					{
						printf("\n����:�ߺ��� ���� �Է� �� �� �����ϴ�.�ٽ� �Է��ϼ���");
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
		// ���� �ľ� 
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
		
		
		printf("\n[%d]��Ʈ����ũ,[%d]��",st,ball);
	}
	printf("\nŬ����!! %d�� �õ�",cnt);
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
