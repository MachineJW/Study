/*���� �����*/
#include <stdio.h>

/*����� �м�*/
// fopen(������ ���ϸ�, ������ ) ���ϰ��� ��� : r,w,a(����)
// fclose() �����м�

int main()
{
	FILE* fp;
	int ch = 0;

	fp = fopen("test.txt", "r");
	if (fp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�.");
		return 1;
	}

	printf("������ ���Ƚ��ϴ�.\n");

	while (ch != EOF)
	{
		ch = fgetc(fp); // ������ ���Ͽ��� ���� �Է�
		putchar(ch); // �Է��� ���� ���
	}

	fclose(fp);
	return 0;

}