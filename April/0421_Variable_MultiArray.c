#include<stdio.h>

void MultiAry1();
void MultiAry2();
void StaticVariable();
void RegisterVariable();
int func();

void main()
{
	StaticVariable();
	RegisterVariable();
	MultiAry1();
	MultiAry2();
}

int func()
{
	static int a = 0;
	a++;
	printf("%d\n",a); 
	return 0;
}
void StaticVariable()
{
	/*정적지역변수*/
	//지역변수를 사용할때 static 예약어를 사용하면 정적 지역 변수가 된다.
	// 선언된 함수가 반환되더라도 그 저장 공간을 계속 유지한다. 함수가 여러 번 호출되는 경우 같은 변수를 공유하는 것이 가능하다.
	int i;
	for(i=0;i<10;i++)
	{
		printf("정적지역 변수 [%d] :",i);
		func();
	}
}
void RegisterVariable()
{
	/*레지스터 변수*/
	// 레지스터 변수는 CPU 안에 있는 저장 공간인 레지스터를 사용.
	// 레지스터는 CPU 안에 있어 데이터 처리 속도가 가장 빠른 저장공간이다. 반복문과 같이  사용이 많은 변수 처리에 좋다. 
	// 단, 프로그램을 실행하는 동안 계속 저장 공간을 확보해야하는 전역 변수는 레지스터에 할당 할 수없다.
	// 주소를 구현할수 없고, 레지스터의 사용 여부는 컴파일러가 결정한다(CPU의 연산 사용량에 따라 레지스터와 메모리 중 효율적인 것으로 처리) 
	register int i;
	for (i=0;i<10000;i++)
	{
		printf("[%d]",i);
		if(i%10==0)
		{
			printf("\n");	
		}		
	 } 
}

void MultiAry1()
{	
	int score[3][4]; // 3명의 4과목 점수를 저장할 2차원 배열. 4는 1차원 배열 요소의 개수, 3은 1차원 배열을 요소로 가지는 2차원 배열요소의 개수 
	int total; 
	double avg;
	int i,j;
	
	for (i=0;i<3;i++) // 3명의 학생 수의 
	{
		printf("\n점수 입력 : ");
		for (j=0;j<4;j++) // 4과목의 점수를 저장한다. 
		{
			scanf("%d",&score[i][j]);
		}
	
	}
	
	for (i=0;i<3;i++) // 3명의 학생 수의 
	{
		total=0; // 다음 학생의 과목을 입력할땐, total 점수는 초기화 
		for(j=0;j<4;j++) // 4과목의 점수를 처리한다. 
		{
			total += score[i][j];	
		}
		avg = total/4.0; // 한 학생의 4과목 점수를 입력받은뒤 평균을 구한다. (강제적형변환) 
		printf("총점 : %d , 평균 : %.2lf\n",total,avg); 
	}
	
}

void MultiAry2()
{	
	// 2차원 배열 초기화 , 선언과 동시에 해준다. 
	int num [3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; 
	// 배열요소를 부족하게 입력하게 되면 남는 요소는 자동으로 0 이 채워짐 
	// 행의 수를 생략 할 수있지만 열의 수는 생략할 수 없다. 
	int num2 [][4] = {{1},{5,6},{9,10,11}};
	// 2차원 배열은 물리적으로 1차원 배열의 나열이다. 1차원 배열을 초기화하는 방식으로 사용 할 수 있다.
	// 행 단위로 차례로 초기화 된다. 
 	int num3 [3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; 	
	
	
	int i,j;
	
	//num
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%3d",num[i][j]);
		}
		printf("\n");		
	 } 
	 
	 printf("\n---------------------\n"); 
	 //num2: 남는요소는 자동으로 0이 채워지는 것을 확인. 
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%3d",num2[i][j]);
		}
		printf("\n");		
	 }
	 
	 printf("\n---------------------\n"); 
	 //num3: 1차원 배열처럼 초기화 가능 
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%3d",num3[i][j]);
		}
		printf("\n");		
	 } 
} 
