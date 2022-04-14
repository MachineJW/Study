#include<stdio.h>

void main(){
	printf("[복합대입 연산자]\n");
	Operator1();
	printf("\n[형 변환  연산자]\n");
	Operator2();
	printf("\n[조건 연산자]\n");
	Operator3();
	printf("\n[ASCII 코드 표 만들기]\n");
	ASCII();
}

void Operator1(){
	/*복합대입 연산자*/
	int a = 100, b = 1000 ,c = 50;
	
	// 왼쪽 피연산자는 반드시 변수가 나와야한다.
	// 오른쪽 항의 계산이 모두 끝난 다음에 복합대입 연산자는 가장 마지막에 계산한다. 
	 
	a += 20;//a에 20을 더하고 a에 대입 
	b /= 10;//b에 10을 나누고 b에 대입 
	a -= 20;//a를 20으로 나누고 a에 대입 
	b *= 10;//b에 10을 곱하고 b에대입
	a += b-c;//a에 b-c의 값을 더하고 a에 대입  
	
	printf("\na = %d, b= %d\n",a,b); 
}

void Operator2(){
	/*형 변환 연산자*/
	float a = 3.14;
	char b = 'A';
	int c = 70; 
	
	
	//형 변환 연산자는 '일시적'으로 바꾸어 준다. 즉 한번 사용했다고 선언했던 자료형이 완전하게 바뀌지 않는다.
	printf("\na = %d",(int)a); 
	printf("\nb = %d",(int)b);
	printf("\nc = %c\n",(char)c);	
}

void Operator3(){
	/*조건 연산자*/
	int max,min,swap;
	
	loop:
		printf("\nmax(min)값 입력: "); 
		scanf("%d",&max);
		printf("min(max)값 입력: "); 
		scanf("%d",&min);
	
	if(max==min){
		printf("\a\n같은 수가 들어갔습니다! 다시 입력하세요\n");
		goto loop;
	}
	
	(max>min) ? (max=max,min=min):(swap=max,max=min,min=swap); // (a>b) ? x:y 일때 (a>b)가 참이면 x 를선택, 거짓이면 y를 선택  
	
	printf("\nmax = %d, min = %d\n",max,min);
	
}

void ASCII(){
	/*아스키코드 표 만들기 10진,8진,16진 까지*/ 
	 
	int i,j,k;
	
	for(i=1;i<=92;i++){
		if(i==1){
			printf("------------------------------------------------------------------------------------------------\n");
			for(k=0;k<4;k++){
				printf(" DEC : OCT : HEX : ASC |");
			}
			printf("\n------------------------------------------------------------------------------------------------");
		}
			printf("\n");
			for(j=32;j<=35;j++){
			printf(" %03d : %03o : %03x : [%c] |",j+i,j+i,j+i,j+i);
		}

	}
}
