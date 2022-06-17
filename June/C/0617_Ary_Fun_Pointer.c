#include<stdio.h>
/*배열을 처리하는 함수*/
// 함수로 배열을 처리하려면 포인터가 필요하다.
// 배열명을 받을 함수의 매개변수 자리에 포인터가 필요하다.
// 포인터의 근본은 변수가 사용범위가 넘어가더라도 다른 함수에서 사용이 가능하다는 것. 

void print_ary(int* pa); //배열을 받을 함수 선언

int main()
{
	int ary[5] = { 10,20,30,40,50 };
	int i = 0;
	printf("ary 첫번째 배열요소의 주소값: %u\n",ary);

	printf("함수에 넣기전...\n");
	for (i = 0; i < 5; i++)
	{
		printf("[%d]", ary[i]);
	}
	printf("\n");
	print_ary(ary);
	printf("\n");
	i = 0;
	printf("함수에 넣은 후......\n");
	for (i = 0; i < 5; i++)
	{
		printf("[%d]", ary[i]);
	}
	printf("\n첫번째 배열요소의 주소값은 변하지 않는다: %u\n", ary);
	return 0;
}

void print_ary(int* pa)
{
	printf("함수에 넣고 돌리는중...");
	int i;


	for (i = 0; i < 5; i++)
	{
		switch(i)
		{
		case 0:
			*(pa + i) = 50;
			break;
		case 1:
			*(pa + i) = 40;
			break;
		case 3:
			*(pa + i) = 20;
			break;
		case 4:
			*(pa + i) = 10;
			break;
		default:
			break;
		}
	}
}
/* 두번째 배열요소 */
// 정수 연산 pa+1 => 두번째 배열요소의 '주소값'
// 간접 참조 연산 *(pa+1) => 두번째 배열 요소 값의 간접참조연산... 실제 데이터를 넣을때
// 배열요소 표현식 pa[1] => 두번째 배열 요소, 간접참조 연산과 똑같은 기능을 수행!
