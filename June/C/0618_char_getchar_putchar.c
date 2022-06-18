#include <stdio.h>
int scanf_char();
int get_put();


int main()
{
	scanf_char();
	get_put();


	return 0;
}
/*sacnf로 문자로 입력할 때는 %C 변환 문자를 사용한다.*/
int scanf_char()
{
	char ch1, ch2;
	char* pc1, * pc2;

	pc1 = &ch1;
	pc2 = &ch2;
	scanf("%c%c", pc1, pc2);// 2개의 문자를 연속으로 입력

	printf("[%c%c]\n", ch1, ch2);
	printf("ACSII[%d,%d]\n", ch1, ch2); // 두 문자의 아스키 코드.

	*pc1 = 65;
	*pc2 = 97;
	printf("[%c%c]\n", ch1, ch2);
	printf("ACSII[%d,%d]", ch1, ch2); // 두 문자의 아스키 코드.
	return 0;
	/* 화이트 스페이스 : 여러개의 문자를 입력 할때 데이터를 구분하기 위해 칸을 띄우거나 탭을 사용하면 공백 문자나 탭 문자가
	데이터로 입력된다. 스페이스 바, 탭, 엔터를 눌렀을때 입력되는 문자를 묶어서 화이트 스페이스라고 한다.
	화이트 스페이스는 %d,%lf,%s 와 같은 숫자나 문자열을 입력할 때 는 데이터를 구분하는 용도로 쓰이고, 그 자체가 데이터로
	입력되지 않는다.*/
}


/*getchar putchar 문자 전용 입출력*/

// 함수원형 : int getchar(void)<- 매개변수가 없고 입력한 문자를 반환, int putchar(int)<- 출력할 문자를 매개변수 인수로 준다.

int get_put()
{
	int ch; // 주의: 매개변수 인수의 자료형이 int형이다.
	/* getchar 함수의 반환형이 int인 이유는 문자 이외의 값도 반환하기 때문이다.문자의 입력을 끝내기 위해
	컨트롤 Z를 누르면 -1을 반환하는데, 이 값을 문자와 정확히 구분하기 위해 반환형으로 int형을 사용해야한다.
	char형은 가장 오른쪽 끝의 바이트만 담기는데, -1과 255의 비트열의 가장 오른쪽의 바이트가 11111111이다 */
	
	printf("문자입력:");
	ch = getchar();
	printf("문자:");
	putchar(ch);


	return 0;
}