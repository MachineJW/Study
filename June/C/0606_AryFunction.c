/*배열을 처리하는 함수*/
# include<stdio.h>

// 함수로 배열을 처리하려면 포인터가 꼭 필요하다.
void print_ary(int* pa);

void main()
{
	int ary[5] = {10,20,30,40,50};
	print_ary(ary);
	
} 
 
 void print_ary(int* pa) // 매개변수가 포인터! 
 {
 	int i;
	
	for (i=0;i<5;i++)
	{
		printf("[%d]",pa[i]);// pa == ary == 배열요소의 첫번째 주소값 
	} 
 }
