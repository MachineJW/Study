#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/*[���� �迭 ��������  ����]
����1 : n���� ũ��� scanf �� �޴´�
����2 : �迭�� ���� 1~100 ������ �������� �־��ش�
����3 : ��� ���� : '[1, 3, 6, 8, 10]' -> ���̸��� �޸� �߰� + ���� + �������� , ���� 2���� �迭 ���� �� ��� */

//void sort(int size,int ary[]);

void main(){
	int a;
	int i,j;
	int swap;
	printf("[���� �迭 �������� ����]\n");
	printf("�� ���� �迭�� �Է��Ͻðڽ��ϱ�?: ");
	scanf("%d",&a);
	int ary[a];
	
	srand(time(NULL)); // �Ű������� ���� �ð��� �޾� �ʱ�ȭ�� �ش�. 
	
	for(i=0;i<a;i++){
		ary[i]=rand()%100+1;
	}
	
	printf("\nary �迭�� �� ����\n");
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
	
	/*���� ����*/
	/*�迭�� 5����� �����غ���. �迭��� ù��° ���� ������ �迭��Ҹ� �ϳ��� ���Ͽ� �� ���� ���� ù��° ��ҷ� ���� �������Ѵ�.
	�׷��ٸ�,������ �迭��Ҵ� �翬�ϰԵ� ���� ū���� ������ �ǰ�, �� �̻� ���� �迭��ҵ� ����. �׷��� ������ �迭��Ҹ� ���ϴ� ������
	������ �迭��Ҹ� �����ؾ� �ϹǷ�, �迭��� -1 ���� �Ǿ��Ѵ�. �׸��� �׾ȿ��� �迭���+1�� ��� ���� ������ ��� ���� �ϳ��� �񱳸� �Ѵ�.
	���Ͽ� ���� ���� ���� �ش� �迭��ҷ� ������ �������� �ٲ㰡�鼭 ó���ϸ� �ȴ�.*/
	
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



/* �Ű������� �迭�� ����Ϸ��� �������� �������??? 
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
	return 0; //��ȯ���� �迭�� ����Ϸ��� ��� �ؾ��ϴ°�??? 
}
*/
