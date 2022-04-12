#include<stdio.h>
int main(){
	const char i = 'C';
	const int a = 127 ;
	int r=0110,c=58,d=0x9a;
	printf("%d",0113);
	printf("\n%d",0x4b);
	printf("\n%d",0x7f);
	printf("\n%d",0110);
	printf("\n%d",a);
	printf("\n%x",i);
	printf("\n%d,%o,%d",r,c,d);
	char v = 127; // char의 정수 범위는 -128~127까지, 그 이상이면 오버플로우 발생 
	printf("\n%d",v);
	//만일 문자의 아스키 코드 값이 궁금하다면?
	char t ='G';
	printf("\n%d",t);
	//데이터형이 차지하는 크기 알아보기
	printf("\n%d",sizeof(r)); // r은 4바이트(int는 4바이트를 차지하기 때문) ,sizeof는 함수가 아닌 연산자 데이터
	 
	
}
