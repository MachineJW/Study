#include <stdio.h>
int main(){
	int number,d=1; 
	printf("���� �Է�: ");
	scanf("%d",&number);
	printf("%d�� ���",number);
	while(number/2 >= d){ //number/2�� d���� ũ�� while �ݺ��� ���� 
		if(number%d == 0){
			printf("%d",d);
		}
		d++;
	}
	printf("%d\n",number);
	
}
