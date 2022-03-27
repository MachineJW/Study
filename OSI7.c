#include<stdio.h>

void main(){
	int a;
	while (a!=999){
	printf("[OSI 7 layer]");
	printf("\n프로그램 종료시 999을 입력하세요! ") ;
	printf("\n원하는 계층을 입력해주세요:");
	scanf("%d",&a);
	switch (a){
		case 1:
			printf("\nOSI 1계층은 [물리계층] 입니다.\n물리적인 아날로그신호를 전기적신호, 즉 디지털 신호로 변환하는 과정이 포함된 계층입니다.\n");
			break;
		case 2:
			printf("\nOSI 2계층은 [데이터링크계층] 입니다.\nMAC주소를 정의하고(주소할당) 신호가 전달되는 동안 오류가 포함되는지를 감지합니다.\n");
			break;
		case 3:
			printf("\nOSI 3계층은 [네트워크계층] 입니다.\nIP(인터넷 프로토콜)주소를 할당하고 라우팅 합니다.\n");
			break;
		case 4:
			printf("\nOSI 4계층은 [전송계층] 입니다.\nTCP또는UDP와 같은 전송프로토콜을 정의하여, 송신자와 수신자를 연결하는 서비스를 제공합니다.\n");
			break;
		case 5:
			printf("\nOSI 5계층은 [세션계층] 입니다.\n응용프로그램(OS)간의 논리적인 연결 생성과 제어를 담당 합니다.\n");
			break;
		case 6:
			printf("\nOSI 6계층은 [표현계층] 입니다.\n데이터 표현방식의 변화에 대해 규정하고,인코딩/디코딩,압축과 해제,암호화와 복호화의 역할을 수행합니다.\n");
			break; 
		case 7:
			printf("\nOSI 7계층은 [응용계층] 입니다.\n사용자 인터페이스로 사람이 인식하고 데이터를 사용자에게 보여주는 역할을 수행합니다.\n");
			break; 
		case 999:
			printf("\n프로그램을 종료합니다.");
			break;
		default:
			printf("\n잘못된 범위입니다.\n1~7계층 중 하나를 선택하세요.\n");
	    continue;
	}
 }
}
