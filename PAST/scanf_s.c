//scanf ���ڿ��� ������ ���, ���� ó�� 
#include<stdio.h>

void main(){
	int x;
	printf("���ڸ�_�Է��ϼ���:");
	while(scanf("%d",&x)<=0){ //��ȯ ���� üũ0 
		printf("\n���!!������ �ٽ� �Է��ϼ���:");
		fflush(stdin); //�Է¹���(stdin)�� ����� ���,stdin�� ǥ���Է���ġ 
	}
	
		printf("\n�����_�Է���_���� ");
		printf("%d",x);
		printf(" �Դϴ�."); 
	
}
 
