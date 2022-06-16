#include<stdio.h>

/*어떤수를 입력받아 소수인지 아닌지 판별하는 프로그램*/

int main(){
	int i;
	int input;
	int cnt = 0;
	int* pa = &input;
	
	
	printf("Prime Number를 판별할 수를 입력:");
	scanf("%d",pa);
	printf("%d 판별 ....\n",input); 
	
	for(i=1;i<=*pa;i++)
	{
		if(*pa%i==0)
		{
			cnt++;
		}
	}
	
	if(cnt==2)
	{
		printf("약수가 1과 자기 자신 밖에 없으므로 PrimeNumber 입니다."); 
	}
	else
	{
		printf("약수의 갯수가 %d 개 이므로 소수가 아닙니다. ",cnt);
	}
	
}
