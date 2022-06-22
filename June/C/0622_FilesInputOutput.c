/*파일 입출력*/
#include <stdio.h>

/*개방과 패쇄*/
// fopen(개방할 파일명, 개방모드 ) 파일개방 모드 : r,w,a(생성)
// fclose() 파일패쇄

int main()
{
	FILE* fp;
	int ch = 0;

	fp = fopen("test.txt", "r");
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.");
		return 1;
	}

	printf("파일이 열렸습니다.\n");

	while (ch != EOF)
	{
		ch = fgetc(fp); // 개방한 파일에서 문자 입력
		putchar(ch); // 입력한 문자 출력
	}

	fclose(fp);
	return 0;

}