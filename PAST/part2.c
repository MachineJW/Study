#include<stdio.h>
#define HONG "hongjiwoo" // ������ ����� �������� ���� 
 
void main(){
	char ch = 127;
	printf("%d",ch); // char ���� -128 ~ 127 ���� [char�� 1����Ʈ = 256����] 
	unsigned char ch1 = 255; 
	printf("\n%d",ch1); // unsigned char�� ��ȣ���� ������ ���� 0~255 ���� [256����] 
	printf("\n���� �޸� Ȯ�� : %d_byte,%d_byte",sizeof(ch),sizeof(ch1)); // ������ ��� ����Ʈ Ȯ��
	unsigned char ch2 = 'B';
	printf("\nB��_�ƽ�Ű�ڵ�:%d_���޸𸮿뷮:%d_byte",ch2,sizeof(ch2)); //B�ƽ�Ű�ڵ� Ȯ�� [�ƽ�Ű�ڵ�� �� 127���� �ִ�] 
	int i = 2147483647;
	printf("\n2147483647�� ���� �޸� �뷮_int��%d_byte",sizeof(i)); // 4����Ʈ [256^8������ ���� ǥ��]
	short j = 32767;
	printf("\nshort�� ���� �޸� �뷮:%dbyte",sizeof(j));
	unsigned long k = 4294967295;
	printf("\nlong�� ���� �޸� �뷮:%dbyte",sizeof(k));
	double PI = 3.141592;
	printf("\ndouble�� ���� �޸� �뷮:%dbyte",sizeof(PI)); // double�� 8����Ʈ
	float f= 3.141592;
	printf("\nfloat�� ���� �޸� �뷮:%dbyte",sizeof(f)); // float�� 4����Ʈ
	double ch3 = 'C';
	printf("\n%f",ch3);
	// C���� bool �������� ����. int�� ����Ѵ�. C++���� bool�������� ����ȴ�.
	int a = ch<ch1;
	printf("\n%d",a); //0�� ����, 1�� ��
	// if������ ���� 0�� ������ '���'�� ������ 0�� ��� ���� �����Ѵ�.
	if(-12325){
		printf("\n-12325�� �� �Դϴ�.");
	}
	if(0){
		printf("\n0�� �� �Դϴ�.");
	}
	else {
		printf("\n0�� ���� �Դϴ�.");
	}
	//���ڿ��� ����,������ �迭
	char str[]="ȫ����";
	printf("\n%s",str); 
	//���ڿ��� ���
	char *str2 = "��ǻ�;�_�����";
	printf("\n%s",str2);
	printf("\n%s",HONG);
}
