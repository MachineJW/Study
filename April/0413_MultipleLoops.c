#include<stdio.h>
// 알파벳A~Z까지 세로열로 찍기 
void main(){
	/*개념잡기*/
	 
	int i, j; // 변수는 앞으로  계속 재활용 하면서 사용... 
	printf("[2중for문 개념]\n ");
	
	//바깥 루프가 한번 반복할때, 안쪽루프는 5번 반복을 수행한다.  
	for(i=0;i<3;i++) 
	{
		printf("\n {i = %d, 바깥쪽 for문}\n", i );

		for(j=0;j<5;j++)
		{
			printf(" -> i = %d, j = %d \n", i, j );
		}		
	}
	
	/*구구단 입력해보기*/
	
	printf("\n[1단~9단 입력해보기]\n");
	// %d * %d = %d 의 형태를 9번 반복(안쪽), 1~9단까지 (바깥쪽) 출력 한다. 
	for(i=1;i<=9;i++){
		printf("\n[%d 단]\n",i);
		for(j=1;j<=9;j++){
			printf("%d * %d = %d\n",i,j,i*j);
		}
	} 
	
	/*scanf로 입력 받아서 최소숫자~최대숫자 까지의 곱셈식을 출력해본다.*/
	
	int x,y,max,min,g; 
	
	printf("\n[몇 단 부터(까지) 시작하시겠습니까?]:");
	scanf("%d",&x);
	printf("\n[몇 단 부터(까지) 시작하시겠습니까?]:");
	scanf("%d",&y);
	
	//만약 큰 값이 먼저 들어 왔을 경우 처리 
	if(x<y){
		min=x;
		max=y;
	}
	else if(x>y){
		min=y;
		max=x;
	}
	
	printf("\n[%d]단 부터 [%d]단 까지\n",min,max);
	//max가 9미만이면 적어도 X9까지는 할 수 있게  고민하다가....
	//즉 내가 원하는건 12단까지가 나왔을 경우 X12까지 보여주는 것이다. 
	if(max<9){
		g=9;
	}
	else{
		g=max;
	}
	
	for(i=min;i<=max;i++){
		printf("\n[%d단]\n",i);
		for(j=1;j<=g;j++){
			printf("%d * %d = %d\n",i,j,i*j);
		}
	}
	
	 /* ABCD 세로열로 정렬해서 찍기... 목표는 5줄마다 한줄씩 바뀐다. */
	 // 일단 문자형 변수를 선언 
	printf("\n[A~Z 세로열로 정렬해서 찍기]");
	char out ;
	char in ;  
	
	
	/* 풀이: 
	가로열 첫번째는 [A][F][K][P][U][Z] 이런 식으로 들어와야한다. 이 값들은 아스키코드 A를 65에서 5로 나눈 나머지가 0인 값 들이다.
	세로열에서는 첫번째 들어온 [A][F][K][P][U][Z] 의 값에서 +1을 증가해준다. 그러면 아스키 코드상으로 [A][F][K][P][U][Z]에
	+1씩 된 값이 [A]=>[B],[F]=>[G] 이런식으로 다음 알파벳 수로 증가하여 [B][G][L][Q][V]의 다음 가로열을 출력할 수있다. 
	*/
	
	for(out=0;out<5;out++){ //어차피 char은 127까지 정수를 표현할수 있다. 그냥쓴다. 
		printf("\n"); // 5줄까지하고 표현 
		for(in='A';in<='Z';in++){
			if(in%5==0+out){ 
			/* A~Z까지 5로 나눈 값이 0 인 것들 ([A][F][K][P][U][Z])에서  out의 값을 더한다.   
			   [A][F][K][P][U][Z]에서  +1 씩 하면  다음 알파벳인 [B][G][L][Q][V]를 가로열로 처리 할 수있다.*/
			printf("[%c]",in);
			}
		}
	}
	// 추가
	char a = 'A' ;
	int i;
	int j;
	for(j = 0 ; j <  5 ; j++) {
		for (i = 0 ; i < 6 ; i++ ) {
		    if(j + i * 5 >= 26) break;
		    printf("%c ", a + j + i * 5 );
		}

		printf("\n");
	}
	 // 여기까지
}
