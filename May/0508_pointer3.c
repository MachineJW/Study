#include<stdio.h>

void pointer1();
void pointer2();
void pointer3();

/* 포인터는 주소를 저장하는 일정한 크기의 메모리 공간.*/
/* 언제든지 다른 주소를 저장하거나 포인터끼리 대입 할 수 있다.*/
/*그러나 일반 변수와는 달리 대입 연산에 엄격한 기준이 적용 된다.*/ 


void main ()
{
	pointer1();
	pointer2();
	pointer3();
}

void pointer1()
{
	/* 주소와 포인터의 차이 */
	// 주소는 변수에 할당된 메모리 저장공간의 시작 주소 값 자체
	// 포인터는 그 값을 저장하는 또 다른 메모리 공간
	 
	int a,b; // 일반 변수 선언 
	int *p; // 포인터 선언 
	p = &a; // p가 a를 가리키도록 설정 
	p = &b; // p가 변수 b를 가리키도록 바꿈. 
	// 한번 할당된 변수의 주소는 프로그램이 종료 될때까지 바뀌지 않는다. 
	// 실제 주소는 상수의 개념이고 포인터는 변수의 개념이 된다.
	
	// 두 포인터가 같은 주소를 저장하는 일도 가능하다 (두 포인터가 하나의 변수를 동시에 가리킨다)  
	int *pa,*pb;
	pa = pb = &a; 
	// a의 값을 바꾸거나 연산하는 데 pa와 pb를 모두 사용할 수 있다.
	*pa = 10;
	printf("%d",*pb); 
	// &a = &b ; <- 주소는 상수의 개념이기 때문에 주소를 바꾸는 것은 불가능하다. 
	
}

void pointer2()
{
	/*모든 주소와 포인터는 가리키는 자료형에 관계 없이 크기가 같다.*/
	char ch;
	int in;
	double db;
	
	char *pc = &ch;
	int *pi = &in;
	double *pd = &db;
	
	printf("\nch의 주소 크기 : %d",sizeof(&ch));
	printf("\nin의 주소 크기 : %d",sizeof(&in));
	printf("\ndb의 주소 크기 : %d",sizeof(&db));
	printf("\npc의 주소 크기 : %d",sizeof(&pc));
	printf("\npi의 주소 크기 : %d",sizeof(&pi));
	printf("\npd의 주소 크기 : %d",sizeof(&pd));
	printf("\n*pc가 가르키는 변수의  크기 : %d",sizeof(*pc));
	printf("\n*pi가 가르키는 변수의  크기 : %d",sizeof(*pi));
	printf("\n*pd가 가르키는 변수의  크기 : %d",sizeof(*pd));
	
	// 주소의 크기는 같다. 시작 주소 값으로 나타내기 때문에 "주소의 크기"는 똑같다. 물론, 주소값은 다 다르겠지만.. 
	// 변수는 크기가 다르다. 가리키는 변수의 크기는 자료형에 따라 다 다르다. 	
}

void pointer3()
{
	/*포인터의 대입 규칙*/
	// 규칙 1 : 포인터는 가리키는 변수의 형태가 같을 때만 대입 해야한다.
	int a = 10;
	int *p = &a; // 포인터 p는 a를 가리킨다. 
	double *pd; // double형 포인터 선언. 
	
	pd = p; // pd의 값에 p 값을 대입. 
	printf("\n%lf",*pd);  // 간접참조연산으로 찍어보면 이상한 결과가 나온다. 
	// 자료형이 다른 포인터를 대입하고 간접 참조 연산을 수행하면 변수에 할당된 영역 이후의 할당되지 않은 영역까지 사용하게 된다. 
	
	// 규칙 2 : 형 변환을 사용한 포인터의 대입은 언제나 가능합니다.
	double b = 3.4;
	pd = &b;
	int *pi;
	pi = (int*)pd; //pd값을 형 변환하여 pi에 대입 
	 
}
