/*�迭�� ó���ϴ� �Լ�*/
# include<stdio.h>

// �Լ��� �迭�� ó���Ϸ��� �����Ͱ� �� �ʿ��ϴ�.
void print_ary(int* pa);

void main()
{
	int ary[5] = {10,20,30,40,50};
	print_ary(ary);
	
} 
 
 void print_ary(int* pa) // �Ű������� ������! 
 {
 	int i;
	
	for (i=0;i<5;i++)
	{
		printf("[%d]",pa[i]);// pa == ary == �迭����� ù��° �ּҰ� 
	} 
 }
