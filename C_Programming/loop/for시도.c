#include<stdio.h>

void main(){
	int max,min,x,y; // �ʱⰪ�� �����ֱ����� y �߰�  
	int cnt = 2;
	//�ʱⰪ  
	printf("ù ��° ���� �Է��ϼ���:");
	scanf("%d",&x);
	printf("�� ��° ���� �Է��ϼ���:");
	scanf("%d",&y);
	
	if (x<y){
		max=y;
		min=x;
	}
	
	else if (x>y){
		max=x;
		min=y;
	}
	printf("�ִ밪:");
	printf("%d\n",max);
	printf("�ּڰ�:");
	printf("%d\n",min);
	
	for(max,min;x>0;cnt++){
		printf("���� �Է��ϼ��� : ");
	 	scanf("%d",&x);
	 	if(x<0)
	 		break;
	 	if(max<x){
	 		max = x;
		 }
		else if (min>x){
		 	min = x;
		 }
		 printf("�ִ밪:");
		 printf("%d\n",max);
		 printf("�ּڰ�:");
		 printf("%d\n",min);
	}
	printf("���α׷� ����! �Էµ� ������:");
	printf("%d",cnt);
}
