#include<stdio.h>
void array1(int x, int y[]);


void main()
{
	int kor[10]={100,90,35,60,75,55,95,80,90,70};
	int i;
	//�迭 ���� ���
	printf("/*�迭�������*/\n"); 
	array1(i,kor);
	
}


void array1(int x, int y[]) // �Ű������� ������, ��ȯ���� ����. 
{
	for(x=0;x<10;x++){
		printf("%d ",y[x]);
	}
}

