/*��ó�� ������*/
#include <stdio.h>

int buffer();
void my_gets(char* str, int size);

int main()
{
	buffer();

	char str[10];//���ڿ��� ������ �迭.

	my_gets(str, sizeof(str));
	printf("���ڿ�: %s\n",str);
	return 0;
}

int buffer() 
{
	int res;
	char ch;

	while (1)
	{
		res = scanf("%c", &ch); // scanf�Լ���, crtl + z�� ������ -1 ��ȯ, 
		if (res == EOF) break; // EOF: stdio.h ��� ���Ͽ� ��ó�� ������ ����Ǿ� ����. scanf�� -1 ��ȯ ��
		printf("[%d]\n", ch);
	}
	return 0;
}

void my_gets(char* str, int size)
{
	int ch; //getchar �Լ��� ��ȯ���� ������ ����.
	int i = 0; // str �迭 ÷��.

	//for������ ���� �ϳ��� �Է� �ް� ����.
	for (i = 0; i < size-1; i++) // size-1�� �ϴ������� �������� ���� �־�����ϱ� ����.
	{
		ch = getchar();
		if (ch == '\n')break; // ����Ű �ԷµǸ� �ݺ��� Ż��.
		str[i] = ch;
	}
	str[i] = '\0'; // �Էµ� ���ڿ� ���� �� ���ڸ� ����.
}
