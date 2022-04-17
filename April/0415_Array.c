#include<stdio.h>
void array1(int x, int y[]);


void main()
{
	int kor[10]={100,90,35,60,75,55,95,80,90,70};
	int i;
	//배열 개념 잡기
	printf("/*배열개념잡기*/\n"); 
	array1(i,kor);
	
}


void array1(int x, int y[]) // 매개변수는 있지만, 반환값이 없음. 
{
	for(x=0;x<10;x++){
		printf("%d ",y[x]);
	}
}

