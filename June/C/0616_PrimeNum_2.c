#include<stdio.h>

/*����� �Է¹޾� �Ҽ����� �ƴ��� �Ǻ��ϴ� ���α׷�*/

int main(){
	int i;
	int input;
	int cnt = 0;
	int* pa = &input;
	
	
	printf("Prime Number�� �Ǻ��� ���� �Է�:");
	scanf("%d",pa);
	printf("%d �Ǻ� ....\n",input); 
	
	for(i=1;i<=*pa;i++)
	{
		if(*pa%i==0)
		{
			cnt++;
		}
	}
	
	if(cnt==2)
	{
		printf("����� 1�� �ڱ� �ڽ� �ۿ� �����Ƿ� PrimeNumber �Դϴ�."); 
	}
	else
	{
		printf("����� ������ %d �� �̹Ƿ� �Ҽ��� �ƴմϴ�. ",cnt);
	}
	
}
