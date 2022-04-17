#include<stdio.h>
 
int sum(int x ,int y );// 함수 선언, ()안은 매개변수 
// 함수 선언시 매개 변수 이름은 생략 할 수 있다. int sum(int,int);
// 함수 선언이 없다면 정의는 항상 함수 호출 이전에 있어야한다. 함수 정의에 원형이 포함된다. 
// 컴파일 하면 반환값을 저장할 공간을 확보한다.
// 함수의 호출 형식에 문제가 없는지 검사한다. 
// 순차지향.....
void fruit(int result, int cnt);
 
void main()
{
	int a,b; 
	int result;
	
	printf("[두 수의 합 입력받기]\n");
	printf("a입력: ");
	scanf("%d",&a);
	printf("b입력: "); 
	scanf("%d",&b);
	result = sum(a,b);
	printf("\nresult:%d",result);
	
	fruit(result,0);
} 

int sum(int x ,int y ) // sum 함수 정의 , 함수 안에서만 사용하는 변수명은 다른 함수의 변수명과 같을 수 있다.  
{
	printf("\nsum함수 돌리는 중"); 
	x+y;
	return (x+y); // sum 함수는 x+y값을 반환 
}

// 재귀 호출 함수
void fruit(int result, int cnt){
	
	printf("\napple");
	
	if (result == cnt) return;
	
	fruit(result,cnt+1); // Q: cnt+1부분에 증감연산자 cnt++을 하면 무한반복이 된다???? 
	
} 
