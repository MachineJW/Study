#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/*[정수 배열 오름차순  정렬]
조건1 : n개의 크기는 scanf 로 받는다
조건2 : 배열의 값은 1~100 사이의 랜덤값을 넣어준다
조건3 : 결과 예시 : '[1, 3, 6, 8, 10]' -> 사이마다 콤마 추가 + 띄어쓰기 + 마지막은 , 없음 2차원 배열 선언 및 출력 */

//void sort(int size,int ary[]);

void main(){
	int a;
	int i,j;
	int swap;
	printf("[정수 배열 오름차순 정렬]\n");
	printf("몇 개의 배열을 입력하시겠습니까?: ");
	scanf("%d",&a);
	int ary[a];
	
	srand(time(NULL)); // 매개변수로 현재 시간을 받아 초기화해 준다. 
	
	for(i=0;i<a;i++){
		ary[i]=rand()%100+1;
	}
	
	printf("\nary 배열에 들어간 정렬\n");
	i=0;
	while(i<a){
		if(i==0){
			printf("Ary = [%d, ",ary[i]);
		}
		else if (i==a-1){
			printf("%d]",ary[i]);	
		}
		else{
			printf("%d, ",ary[i]);
		} 
		i++;
	}
	
	/*선택 정렬*/
	/*배열이 5개라고 가정해본다. 배열요소 첫번째 부터 나머지 배열요소를 하나씩 비교하여 더 작은 수를 첫번째 요소로 가게 만들어야한다.
	그렇다면,마지막 배열요소는 당연하게도 가장 큰수가 들어오게 되고, 더 이상 비교할 배열요소도 없다. 그렇기 때문에 배열요소를 비교하는 과정은
	마지막 배열요소를 제외해야 하므로, 배열요소 -1 번이 되야한다. 그리고 그안에서 배열요소+1의 요소 부터 마지막 요소 까지 하나씩 비교를 한다.
	비교하여 가장 작은 값이 해당 배열요소로 들어오게 스왑으로 바꿔가면서 처리하면 된다.*/
	
	for(i=0;i<a-1;i++)
	{
		for (j=i;j<a;j++)
		{
			if(ary[i]>ary[j])
			{
				swap = ary[i];
				ary[i] = ary[j];
				ary[j] = swap;
			}
		}
	}
	
	printf("\n[sort]\n");
	i=0;
	while(i<a){
		if(i==0){
			printf("SortAry = [%d, ",ary[i]);
		}
		else if (i==a-1){
			printf("%d]",ary[i]);	
		}
		else{
			printf("%d, ",ary[i]);
		} 
		i++;
	}
} 



/* 매개변수로 배열을 사용하려면 포인터의 개념부터??? 
void sort(int size,int ary[]){
	
	int i,j,swap;
	int min;
	
	for (i=0;i<size-1;i++){
		min=i;
		for (j=i+1;j<size;j++){
			if(ary[min]<ary[j]){
				min=j;
			}
		
		}
		if (min != i){
		swap=ary[i];
		ary[i]=ary[min];
		ary[min]=swap;
	}
	}
	
	printf("\n[sort]\n");
	i=0;
	while(i<size){
		printf("ArySort[%d] = [%d] ",i,ary[i]);
		i++;
	}
	return 0; //반환값도 배열을 사용하려면 어떻게 해야하는가??? 
}
*/
