//getc(),putc()
#include <stdio.h>

int main() {
	char s; //���ڿ� ���� s 
	printf("���� �Է�: "); 	
	s = getc(stdin); // getc(stdin) �Լ��� ���ڿ��� Ű����� �Է¹޾� ����s�� �����Ѵ�.  
	printf("�Էµ� ����= ");
	putc(s,stdout);// putc(s,stdout) �Լ��� �Էµ� ���ڸ� ����Ϳ� ����Ѵ�. stdout�� ǥ�������ġ(�����)�̴�. 
	putc('\n',stdout);
}

/*
int main(){
	char in_data[20]="50.129";
	char out_data[80];
	char out_format[40]="x�� ���� = %d, y�� ���� = %d\n";
	int x,y;
	sscanf(in_data,"%d*c%d",&x,&y);
	sprintf(out_data,out_format,x,y);
	puts(out_data);
	return;
}
*/
