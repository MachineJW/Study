#include<stdio.h>
 
int sum(int x ,int y );// �Լ� ����, ()���� �Ű����� 
// �Լ� ����� �Ű� ���� �̸��� ���� �� �� �ִ�. int sum(int,int);
// �Լ� ������ ���ٸ� ���Ǵ� �׻� �Լ� ȣ�� ������ �־���Ѵ�. �Լ� ���ǿ� ������ ���Եȴ�. 
// ������ �ϸ� ��ȯ���� ������ ������ Ȯ���Ѵ�.
// �Լ��� ȣ�� ���Ŀ� ������ ������ �˻��Ѵ�. 
// ��������.....
void fruit(int result, int cnt);
 
void main()
{
	int a,b; 
	int result;
	
	printf("[�� ���� �� �Է¹ޱ�]\n");
	printf("a�Է�: ");
	scanf("%d",&a);
	printf("b�Է�: "); 
	scanf("%d",&b);
	result = sum(a,b);
	printf("\nresult:%d",result);
	
	fruit(result,0);
} 

int sum(int x ,int y ) // sum �Լ� ���� , �Լ� �ȿ����� ����ϴ� �������� �ٸ� �Լ��� ������� ���� �� �ִ�.  
{
	printf("\nsum�Լ� ������ ��"); 
	x+y;
	return (x+y); // sum �Լ��� x+y���� ��ȯ 
}

// ��� ȣ�� �Լ�
void fruit(int result, int cnt){
	
	printf("\napple");
	
	if (result == cnt) return;
	
	fruit(result,cnt+1); // Q: cnt+1�κп� ���������� cnt++�� �ϸ� ���ѹݺ��� �ȴ�???? 
	
} 
