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
	char name[5][20]; // 2���� ���ڿ� �迭 ���� "20ũ���� ���ڿ� 5��" 5�� 20�� 
	int i,cnt;
	
	cnt = sizeof(name)/sizeof(name[0]); // ���� ����, ��ü �迭 ����Ʈ  ������ �迭�� �� ��� ����Ʈ = 5����Ʈ 
	
	for(i=0;i<cnt;i++)
	{
		printf("���ڿ� �Է�:");
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
		printf("[%d]���� ��Ī �Է�:",i+1);
		scanf("%s",OSI[i]);
	}
}
