#include<stdio.h>

void aryPointer();
void aryPointer2();



void main()
{
	aryPointer();	
	aryPointer2();	
}

void aryPointer()
{
	int ary[3] = {10,20,30} ;
	int *pa = ary; // 포인터 초기화, 배열명은 항상 그 배열의 첫번째 주솟값을 의미. 
	int i;
	
	//포인터 주소값의 연산: +1씩 될때마다 해당 자료형의 byte 만큼 주소값이 늘어난다.
	// int형은 1개당 4바이트를 차지하므로 *pa를 +1씩 해준다면 4바이트씩 늘어나서 첫번째 주소값이  100이라면 +1을 하면 104가 된다. 
	// 포인터 배열 요소 표기법 : pa[0] == *(pa+0), pa[1] == *(pa+1)......... 
	
	printf("배열의 값");
	for(i=0;i<3;i++)
	{
		printf("\n[%d] :",i);
//		scanf("%d",pa+i);
		scanf("%d",pa);
		pa++;
	}
	pa = ary; // pa 주소값을 다시 ary 첫번째 주소값으로 "초기화" , 책에서는 안해도 된다고 나와있지만 dev C 컴파일러 기준으로 초기화를 해줘야 된다..... 
	
	printf("\nary = ");
	for(i=0;i<3;i++)
	{
		printf("[%d]",*pa);
		pa++;
		// 후위형 이므로, 다음연산인 간접 참조 연산을 수행할 때는 증가되기 이전의 값이 사용
		// pa가 가리키던 배열 요소의 값이 먼저 출력되고 pa가 다음 배열 요소를 가리키는 것과 결과는 같다.		
	}
	/*늘 강조하지만, 포인터가 가리키는 해당 주소값이 유효한지 꼭 확인할것!*/
}

/*포인터 뺄셈*/
// 가리키는 자료형이 같으면 포인터끼리의 뺄셈이 가능하다.
// 포인터 - 포인터 => 값의 차 / 가리키는 자료형의 크기 
void aryPointer2()
{
	 int ary[5] = {10,20,30,40,50}; 
	 int *pa = ary;
	 int *pb = pa+3; // 네 번째 배열요소. 
	
	/*pa와 pb의 주소 값!*/
	printf("\npa : %u",pa); 
	printf("\npb : %u",pb);
	 
	pa++; // pa를 다음 배열 요소로 이동 
	printf("\npb - pa : %u",pb-pa); // 두 포인터의 뺄셈 : (두 주소 값의 차)/sizeof(int) <- 4byte
	// 즉, 배열 요소 간의 간격 차이를 의미. 
	printf("\n앞에 있는 배열 요소의 값 출력 : ");
	
	pa < pb ? printf("\n%d",*pa):printf("\n%d",*pb); // 삼항연산자 => 조건 ? 참:거짓 
}
