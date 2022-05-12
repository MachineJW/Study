/*TCP/IP �����ϱ�*/
#include<winsock2.h> // TCP/IP���� ���Ǵ� ��� �Լ����� winsock2.h�� ������ �Ǿ��ִ�.
#include<stdio.h>
#pragma comment (lib,"wsock32.lib")

/*TCP/IP�� ������ �����͸� �ְ�ޱ� ���� ��űԾ��̴�.*/
void main()
{
	SOCKET s;
	WSADATA wsaData;
	SOCKADDR_IN sin;

	if (WSAStartup(WINSOCK_VERSION, &wsaData) != 0)
	{
		printf("WSAStartup ����, �����ڵ� = %d", WSAGetLastError());
		return;
	}

	s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	/*������ ����(����)������ ���� ������ ���� ������ ���Ǳ� ������ ������ �����ϴ� WSAStartup �Լ��� �����ϴ� WSAClaen �Լ� ������ �ʼ����̴�.*/
	if (s == INVALID_SOCKET)
	{
		printf("\n���� ���� ����, �����ڵ�:%d", WSAGetLastError());
		WSACleanup();
		return;
	}

	sin.sin_family = AF_INET;//�ּ� ü�� ����
	sin.sin_addr.s_addr = inet_addr("127.0.0.1");//���� �ּ� ����
	sin.sin_port = htons(21); //��Ʈ ��ȣ ����

	if (connect(s,(struct sockaddr*)&sin, sizeof(sin)) != 0)
	{
		printf("\n���� ����, �����ڵ�:%u", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	if (closesocket(s) != 0)
	{
		printf("\n���� ���� ����, �����ڵ�:%u", WSAGetLastError());
		WSACleanup();
		return;
	}

	if (WSACleanup() != 0)
	{
		printf("\nWSACleanup ����, �����ڵ�: %u", WSAGetLastError());
		return;
	}

	puts("127.0.0.1�� 21�� ��Ʈ�� ������ �����Ͽ����ϴ�.");
}
