#include<stdio.h>

void Operator1(int x);
void Array1();
void Array2();

void main(){
	Operator1(1);
	Array1();
	Array2();
}

void Operator1(int x){ 	// 전위형, 후휘형 증감 연산자
	int pre,post;
	pre = (++x)*3; // x값을 증가한 후에 3을 곱함. 
	x=1;
	post = (x++)*3; // 3을 곱한후 x가 증가... 
	printf("전위 ++x = %d, 후위x++ = %d\n",pre,post);
	// 전위 표기는 값이 증감하고 나서 연산에 사용, 후위 표기는 연산에 사용하고 나서 값이 증감
	// 연산자 우선순위 1차  -> 단항  -> 산술  -> 비트 이동 -> 관계 -> 동등 -> 비트 논리 -> 논리 -> 조건(삼항) -> 대입 -> 콤마 
}

void Array1(){
	int ary[5];
	int i;
	//배열을 선언할때와 배열요소를 사용할때의 []의 의미는 다르다.
	//대입하거나 연산 할 때 하나의 변수처럼 사용한다. 
	ary[0] = 10;
	ary[1] = 5;
	ary[2] = ary[0]+ary[1];
	ary[3] = ary[2]+ary[0];
	ary[4] = 4;
	ary[5] = 12;
	printf("\n몇번째 배열을 보고싶습니까? (배열은 0부터 5까지) :");
	scanf("%d",&i);
	printf("\n%d",ary[i]);
	printf("\nary의 sizeof: %d byte",sizeof(ary)); // 4바이트 5개, 연속적으로 20 바이트를 할당 한다.
	printf("\nary[6] : %d",ary[6]); // 배열의 영역을 벗어난 메모리를 사용하면 침범한 영역이 어떤 용도로 사용되는냐에 따라 결과가 달라짐.
	// 배열 초기화
	int ary1[5] = {1,2,3,4,5};
	printf("\n[%d] [%d] [%d] [%d] [%d] [%d] ",ary1[0],ary1[1],ary1[2],ary1[3],ary1[4],ary1[5]);
	int ary2[5] = {1,2,3};
	printf("\n[%d] [%d] [%d] [%d] [%d] [%d]<= 왼쪽부터 채워지고 값이 없으면 0으로 채워짐 ",ary2[0],ary2[1],ary2[2],ary2[3],ary2[4],ary2[5]);
}

void Array2(){
	//배열은 최초 선언 할때만 초기화가 가능. 즉 한번만! 그 이후에는 배열 요소에 일일이 값을 대입해야 한다.
	// 배열과 반복문
	// n개의 점수를 입력받아 평균을 구하는 프로그램
	int count;
	int i;
	int total = 0;
	double avg;
	
	printf("\n몇개의 점수의 평균을 구할 겁니까??: ");
	scanf("%d",&count);
	
	int score[count]; 
	count = sizeof(score)/sizeof(score[0]);
	 // sizeof연산을 활용한예제가 있는데 한 번 써보 았다... 큰의미는 없는듯... 
	 // score[count]의 총 크기(바이트)와 socre 배열 하나의 int 4 바이트로 나누었을 때 값은 count가 된다....
	 // 예를 들어 count가 5라고 하면 총차지하는 배열 크기는 20바이트가 될거고, 그걸 배열요소 하나 int, 4바이트로 나누면 5가 나온다... 
	for(i=0;i<count;i++){
		printf("\n[%d]에 들어갈 점수: ",i);
		scanf("%d",&score[i]);
		total += score[i];
	}
	
	avg = total/count;
	
	// while 문도 써주자. 안쓰다가 까먹겠다... 
	i=0;
	while(i<count){
		printf("[%d]",score[i]); // 성적 출력 
		i++;
	}
	
	printf("\n평균: %.1f\n",avg); 
}


