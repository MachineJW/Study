#include<stdio.h>

void main(){
	printf("[���մ��� ������]\n");
	Operator1();
	printf("\n[�� ��ȯ  ������]\n");
	Operator2();
	printf("\n[���� ������]\n");
	Operator3();
	printf("\n[ASCII �ڵ� ǥ �����]\n");
	ASCII();
}

void Operator1(){
	/*���մ��� ������*/
	int a = 100, b = 1000 ,c = 50;
	
	// ���� �ǿ����ڴ� �ݵ�� ������ ���;��Ѵ�.
	// ������ ���� ����� ��� ���� ������ ���մ��� �����ڴ� ���� �������� ����Ѵ�. 
	 
	a += 20;//a�� 20�� ���ϰ� a�� ���� 
	b /= 10;//b�� 10�� ������ b�� ���� 
	a -= 20;//a�� 20���� ������ a�� ���� 
	b *= 10;//b�� 10�� ���ϰ� b������
	a += b-c;//a�� b-c�� ���� ���ϰ� a�� ����  
	
	printf("\na = %d, b= %d\n",a,b); 
}

void Operator2(){
	/*�� ��ȯ ������*/
	float a = 3.14;
	char b = 'A';
	int c = 70; 
	
	
	//�� ��ȯ �����ڴ� '�Ͻ���'���� �ٲپ� �ش�. �� �ѹ� ����ߴٰ� �����ߴ� �ڷ����� �����ϰ� �ٲ��� �ʴ´�.
	printf("\na = %d",(int)a); 
	printf("\nb = %d",(int)b);
	printf("\nc = %c\n",(char)c);	
}

void Operator3(){
	/*���� ������*/
	int max,min,swap;
	
	loop:
		printf("\nmax(min)�� �Է�: "); 
		scanf("%d",&max);
		printf("min(max)�� �Է�: "); 
		scanf("%d",&min);
	
	if(max==min){
		printf("\a\n���� ���� �����ϴ�! �ٽ� �Է��ϼ���\n");
		goto loop;
	}
	
	(max>min) ? (max=max,min=min):(swap=max,max=min,min=swap); // (a>b) ? x:y �϶� (a>b)�� ���̸� x ������, �����̸� y�� ����  
	
	printf("\nmax = %d, min = %d\n",max,min);
	
}

void ASCII(){
	/*�ƽ�Ű�ڵ� ǥ ����� 10��,8��,16�� ����*/ 
	 
	int i,j,k;
	
	for(i=1;i<=92;i++){
		if(i==1){
			printf("------------------------------------------------------------------------------------------------\n");
			for(k=0;k<4;k++){
				printf(" DEC : OCT : HEX : ASC |");
			}
			printf("\n------------------------------------------------------------------------------------------------");
		}
			printf("\n");
			for(j=32;j<=35;j++){
			printf(" %03d : %03o : %03x : [%c] |",j+i,j+i,j+i,j+i);
		}

	}
}
