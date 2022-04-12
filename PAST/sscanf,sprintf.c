//getc(),putc()
#include <stdio.h>

int main() {
	char s; //문자열 변수 s 
	printf("문자 입력: "); 	
	s = getc(stdin); // getc(stdin) 함수는 문자열을 키보드로 입력받아 변수s에 저장한다.  
	printf("입력된 문자= ");
	putc(s,stdout);// putc(s,stdout) 함수는 입력된 문자를 모니터에 출력한다. stdout은 표준출력장치(모니터)이다. 
	putc('\n',stdout);
}

/*
int main(){
	char in_data[20]="50.129";
	char out_data[80];
	char out_format[40]="x의 값은 = %d, y의 값은 = %d\n";
	int x,y;
	sscanf(in_data,"%d*c%d",&x,&y);
	sprintf(out_data,out_format,x,y);
	puts(out_data);
	return;
}
*/
