//������ ���� ������ �Է��Ͽ� �ִ񰪰� �ּڰ��� ���ϰ�, �Էµ� �������� ������ ���ϴ� ���α׷��� �ۼ�
// ������  �Է��� �������� ���� �Է� 
#include<stdio.h>

void main(){
	int max,min,x;
	int cnt = 0;
	 while(1){
	 	printf("���� �Է��ϼ��� : ");
	 	scanf("%d",&x);
	 	if(x<0){
	 		break;//�������� ������ �������� �������� 
		 }
		
	 	if(max<x){
	 		max = x;
		 }
		 
		if(min>x|cnt==0){
			min = x;
		 }
		 
		 printf("�ִ밪:");
		 printf("%d\n",max);
		 printf("�ּڰ�:");
		 printf("%d\n",min);
		 cnt++;
		 
	 }
	 
	printf("���α׷� ����! �Էµ� ������:");
	printf("%d",cnt); 
}
