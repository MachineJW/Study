#include <stdio.h>
#include <string.h> // strlen ���... 


void scanf_charary();
void gets_charary();
void fgets_charary();

int main()
{
	scanf_charary();
	getchar();// ���ۿ� �����ִ� ���ڸ� ��������.... ���� ����... -> scanf �Լ��� ������ ���� ���� \n�� �����.
	gets_charary();
	fgets_charary();

	return 0;
}

void scanf_charary()
{
	char str[80];

	printf("Input: ");
	scanf("%s", str); // ���͸� ���� ���� ù��° ���ڿ������� �� ����� ���� ���� ���� ������ �����Ͽ� ���.. ���� ��� ���ڿ��� �Է¹��ۿ� �������
	printf("�ܾ�1:%s\n", str); 
	scanf("%s", str); // ���๮�ڷ� ���еǾ� �Է¹��ۿ� ���� �ܾ���� ��� , �Է¹��ۿ� �����ִ� �ܾ �ڵ����� ����
	printf("�ܾ�2:%s\n", str);
	scanf("%s", str); // ���๮�ڷ� ���еǾ� �Է¹��ۿ� ���� �ܾ���� ��� , �Է¹��ۿ� �����ִ� �ܾ �ڵ����� ����
	printf("�ܾ�3:%s\n", str);
	/*scanf�Լ��� ���ڿ��� �����ҹ迭�� ũ�⸦ ���� ���Ѵ�. �ּҰ��� �μ��� �ޱ� ������ ������ �迭�� ���� ��ġ�� �˰� �ִ�.*/
}

void gets_charary()
{
	/*gets �Լ� ���� : char* gets(char *str)*/
	// scanf �Լ��� �����̳� �� ���ڸ� �����Ͽ� ���ڿ��� �ѹ��� �Է� �Ҽ� ����. gets �Լ��� �����ϴ�.
	char str[80];

	printf("Input: ");
	gets(str);
	printf("Output: %s\n", str);
}

void fgets_charary()
{
	/*fgets �Լ��� gets�� ������ ����������, ������ �迭�� �ִ�ũ������� �Է¹޴´�.*/
	// �ٸ� �Լ����� �迭�� ���� �𸣱� ������ �Ժη� �Է��ϴٰ� ������ �迭�� ũ�⸦ �Ѿ��, ������ ���꿡 ū ������ Űģ��.
	// ���� fgets( �迭��,�迭ũ��,ǥ���Է� )

	char str[80];
	printf("Input : ");
	fgets(str,sizeof(str),stdin);// stdin : Ű����� ����� ǥ�� �Է��� ����϶�.
	str[strlen(str) - 1] = '\0'; // strlen�� �迭���� �μ��� �޾Ƽ� �� ���� ���������� ���� ���� ���� ��ȯ�Ѵ�.
	/*fgets �Լ��� �򰥸���...  ������ ���͸� ���� ���๮�ڱ��� �����ϰ� �ι��ڸ� ���δ�. �׷��� ���� �� �� �� �迭 ���� ���� ���๮�ڸ� �����ϴ� �۾��� �ʿ��Ѵ�.*/
	printf("Output : %s ", str);

}