#include<stdio.h>

void main(){
		
		char s1[4][10];    // 크기가 10인 char형 배열을 선언

		int i;

		for (i = 0 ; i < 4 ; i++) {
				printf("문자열을 입력하세요: ");
				scanf("%s", s1[i]);     // 표준 입력을 받아서 배열 형태의 문자열에 저장
		}
		for (i = 0 ; i < 4 ; i++) {
			printf("%s\n", s1[i]);  // 문자열의 내용을 출력
		}

}