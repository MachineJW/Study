/*전처리 지시자*/
#include <stdio.h>

int buffer();
void my_gets(char* str, int size);

int main()
{
	buffer();

	char str[10];//문자열을 저장할 배열.

	my_gets(str, sizeof(str));
	printf("문자열: %s\n",str);
	return 0;
}

int buffer() 
{
	int res;
	char ch;

	while (1)
	{
		res = scanf("%c", &ch); // scanf함수는, crtl + z를 누르면 -1 반환, 
		if (res == EOF) break; // EOF: stdio.h 헤더 파일에 전처리 지시자 선언되어 있음. scanf의 -1 반환 값
		printf("[%d]\n", ch);
	}
	return 0;
}

void my_gets(char* str, int size)
{
	int ch; //getchar 함수의 반환값을 저장할 변수.
	int i = 0; // str 배열 첨자.

	//for문으로 문자 하나씩 입력 받고 저장.
	for (i = 0; i < size-1; i++) // size-1을 하는이유는 마지막에 널을 넣어줘야하기 때문.
	{
		ch = getchar();
		if (ch == '\n')break; // 엔터키 입력되면 반복문 탈출.
		str[i] = ch;
	}
	str[i] = '\0'; // 입력된 문자열 끝에 널 문자를 저장.
}
