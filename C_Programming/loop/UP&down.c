//��ó�� 
#include<stdio.h> //ǥ��������Լ��� ���ǵǾ��ִ� ������� 
#include<stdlib.h>//�����߻��Լ��� ���ǵǾ��ִ� ������� 
#include<time.h>//�����߻��ʱ�ȭ �Լ��� �ַ� time�� �Ű������� ����Ѵ�.time �Լ��� ���ǵǾ��ִ� ��������� �ҷ��´�. 

//main �Լ� 
void main(){
	printf("[UP&DOWN]");
	int i;
	int cnt = 0;  
	int num ;
	
	srand(time(NULL)); //srand�� �����߻� �ʱ�ȭ �Լ�,time�� �ð��� ���� �����μ� ������� �帥 �ð��� �� ������ ��ȯ�Ѵ�.
	//���� ������� �帥 �ð��� ���Ϸ��� time�� NULL�� �����ϰ� ���� ��ȯ���� �� �ִ�. 
	num = rand()%100+1; // �����߻����� ��: rand()%����������_����+����_�� 
	printf("\n������_����:%d",num);	
	
	for(i=0;i!=num;cnt++){
	printf("\n%d��°����",cnt); 
	printf("\n1~100�� ���ڸ� ���纸����:");
	scanf("%d",&i);
	if(i<num){
		printf("\n[UP]");
	}
	else if(i>num){
		printf("\n[DOWN]");
	}
	}
	printf("����! ����� %d�� ���� Ŭ���� �Ͽ����ϴ�.",cnt);
} 
