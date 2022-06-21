#include <stdio.h>
#include <string.h> // strlen 사용... 


void scanf_charary();
void gets_charary();
void fgets_charary();

int main()
{
	scanf_charary();
	getchar();// 버퍼에 남아있는 문자를 전부제거.... 버퍼 비우기... -> scanf 함수는 무조건 개행 문자 \n을 남긴다.
	gets_charary();
	fgets_charary();

	return 0;
}

void scanf_charary()
{
	char str[80];

	printf("Input: ");
	scanf("%s", str); // 엔터를 누른 순간 첫번째 문자에서부터 탭 띄어쓰기와 같은 개행 문자 전까지 저장하여 출력.. 물론 모든 문자열은 입력버퍼에 담겨있음
	printf("단어1:%s\n", str); 
	scanf("%s", str); // 개행문자로 구분되어 입력버퍼에 쌓인 단어들을 출력 , 입력버퍼에 남아있는 단어를 자동으로 저장
	printf("단어2:%s\n", str);
	scanf("%s", str); // 개행문자로 구분되어 입력버퍼에 쌓인 단어들을 출력 , 입력버퍼에 남아있는 단어를 자동으로 저장
	printf("단어3:%s\n", str);
	/*scanf함수는 문자열을 저장할배열의 크기를 알지 못한다. 주소값을 인수로 받기 때문에 오로지 배열을 시작 위치만 알고 있다.*/
}

void gets_charary()
{
	/*gets 함수 원형 : char* gets(char *str)*/
	// scanf 함수는 공백이나 탭 문자를 포함하여 문자열을 한번에 입력 할수 없다. gets 함수는 가능하다.
	char str[80];

	printf("Input: ");
	gets(str);
	printf("Output: %s\n", str);
}

void fgets_charary()
{
	/*fgets 함수는 gets와 사용법은 동일하지만, 지정된 배열의 최대크기까지만 입력받는다.*/
	// 다른 함수들은 배열의 끝을 모르기 때문에 함부로 입력하다가 지정된 배열의 크기를 넘어서서, 포인터 연산에 큰 영향을 키친다.
	// 사용법 fgets( 배열명,배열크기,표준입력 )

	char str[80];
	printf("Input : ");
	fgets(str,sizeof(str),stdin);// stdin : 키보드와 연결된 표준 입력을 사용하라.
	str[strlen(str) - 1] = '\0'; // strlen은 배열명을 인수로 받아서 널 문자 이전까지의 문자 수를 세어 반환한다.
	/*fgets 함수는 헷갈리게...  마지막 엔터를 누른 개행문자까지 저장하고 널문자를 붙인다. 그래서 실제 널 이 들어간 배열 전에 엔터 개행문자를 삭제하는 작업이 필요한다.*/
	printf("Output : %s ", str);

}