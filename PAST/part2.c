#include<stdio.h>
#define HONG "hongjiwoo" // 문자형 상수를 전역으로 선언 
 
void main(){
	char ch = 127;
	printf("%d",ch); // char 형은 -128 ~ 127 까지 [char은 1바이트 = 256가지] 
	unsigned char ch1 = 255; 
	printf("\n%d",ch1); // unsigned char은 부호없는 문자형 변수 0~255 까지 [256가지] 
	printf("\n변수 메모리 확인 : %d_byte,%d_byte",sizeof(ch),sizeof(ch1)); // 변수에 담긴 바이트 확인
	unsigned char ch2 = 'B';
	printf("\nB의_아스키코드:%d_담긴메모리용량:%d_byte",ch2,sizeof(ch2)); //B아스키코드 확인 [아스키코드는 딱 127가지 있다] 
	int i = 2147483647;
	printf("\n2147483647의 변수 메모리 용량_int형%d_byte",sizeof(i)); // 4바이트 [256^8가지의 정보 표현]
	short j = 32767;
	printf("\nshort의 변수 메모리 용량:%dbyte",sizeof(j));
	unsigned long k = 4294967295;
	printf("\nlong의 변수 메모리 용량:%dbyte",sizeof(k));
	double PI = 3.141592;
	printf("\ndouble의 변수 메모리 용량:%dbyte",sizeof(PI)); // double은 8바이트
	float f= 3.141592;
	printf("\nfloat의 변수 메모리 용량:%dbyte",sizeof(f)); // float은 4바이트
	double ch3 = 'C';
	printf("\n%f",ch3);
	// C언어에는 bool 변수형이 없다. int로 대신한다. C++부터 bool변수형이 적용된다.
	int a = ch<ch1;
	printf("\n%d",a); //0은 거짓, 1은 참
	// if문에서 참은 0을 제외한 '모든'값 거짓은 0인 경우 만을 포함한다.
	if(-12325){
		printf("\n-12325는 참 입니다.");
	}
	if(0){
		printf("\n0은 참 입니다.");
	}
	else {
		printf("\n0은 거짓 입니다.");
	}
	//문자열형 변수,문자의 배열
	char str[]="홍지우";
	printf("\n%s",str); 
	//문자열형 상수
	char *str2 = "컴퓨터야_사랑해";
	printf("\n%s",str2);
	printf("\n%s",HONG);
}
