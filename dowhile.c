// �ݺ��� do while 
// do while�� ������ �� ����
// while�� ���� �� ���� 
#include <stdio.h>

void main(){
	int x = 0;
	int y = 0;
	int i;
	
	printf("do~while");
	do { // do(���๮)�� ���� �����Ѵ�. ��,��� �ѹ��� ����. 
	    printf("x����\n"); 
		x++;	
	} while(x<=5); // ������ �´��� �ľ�. 
	printf("END\n");
	printf("\n");
	
	printf("while");
	while(y<=5){ // ������ ���� �´��� �ľ�. 
		printf("y����\n");
		y++;
	}
	printf("END\n");
	printf("\n");
	
	printf("���ʽ�for��\n"); 
		for(i=0;i<=5;i++) { // for(1;2;3;){ ���� ���๮ } 1:�ʱ갪, 2:���ǽ�, 3:���ǰ� ����(������ �ѹ� ������ ���� ����) 
		printf("for����\n");
	}
	printf("END\n");
	 
}
