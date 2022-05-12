/*TCP/IP 이해하기*/
#include<winsock2.h> // TCP/IP에서 사용되는 모든 함수들은 winsock2.h에 선언이 되어있다.
#include<stdio.h>
#pragma comment (lib,"wsock32.lib")

/*TCP/IP는 서버와 데이터를 주고받기 위한 통신규약이다.*/
void main()
{
	SOCKET s;
	WSADATA wsaData;
	SOCKADDR_IN sin;

	if (WSAStartup(WINSOCK_VERSION, &wsaData) != 0)
	{
		printf("WSAStartup 실패, 에러코드 = %d", WSAGetLastError());
		return;
	}

	s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	/*윈도우 소켓(윈속)에서는 여러 가지의 소켓 버전이 사용되기 때문에 소켓을 설정하는 WSAStartup 함수와 해제하는 WSAClaen 함수 동작이 필수적이다.*/
	if (s == INVALID_SOCKET)
	{
		printf("\n소켓 생성 실패, 에러코드:%d", WSAGetLastError());
		WSACleanup();
		return;
	}

	sin.sin_family = AF_INET;//주소 체계 설정
	sin.sin_addr.s_addr = inet_addr("127.0.0.1");//접속 주소 설정
	sin.sin_port = htons(21); //포트 번호 설정

	if (connect(s,(struct sockaddr*)&sin, sizeof(sin)) != 0)
	{
		printf("\n접속 실패, 에러코드:%u", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	if (closesocket(s) != 0)
	{
		printf("\n소켓 제거 실패, 에러코드:%u", WSAGetLastError());
		WSACleanup();
		return;
	}

	if (WSACleanup() != 0)
	{
		printf("\nWSACleanup 실패, 에러코드: %u", WSAGetLastError());
		return;
	}

	puts("127.0.0.1의 21번 포트에 접속을 성공하였습니다.");
}
