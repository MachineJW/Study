#include<stdio.h>
int main(){
	const char i = 'C';
	const int a = 127 ;
	int r=0110,c=58,d=0x9a;
	printf("%d",0113);
	printf("\n%d",0x4b);
	printf("\n%d",0x7f);
	printf("\n%d",0110);
	printf("\n%d",a);
	printf("\n%x",i);
	printf("\n%d,%o,%d",r,c,d);
	char v = 127; // char�� ���� ������ -128~127����, �� �̻��̸� �����÷ο� �߻� 
	printf("\n%d",v);
	//���� ������ �ƽ�Ű �ڵ� ���� �ñ��ϴٸ�?
	char t ='G';
	printf("\n%d",t);
	//���������� �����ϴ� ũ�� �˾ƺ���
	printf("\n%d",sizeof(r)); // r�� 4����Ʈ(int�� 4����Ʈ�� �����ϱ� ����) ,sizeof�� �Լ��� �ƴ� ������ ������
	 
	
}
