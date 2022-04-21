#include<stdio.h>
#include<string.h> // 문자열 관련 함수 원형을 모아놓은 헤더 파일 불러오기 

void CharAry1();
void CharAry2();
void CharAry3();
void CharAry4();

void main()
{
	printf("[char array 기초]\n");
	CharAry1();
	printf("\n[문자열을 대입하는 strcpy 함수]");
	CharAry2();
	printf("\n[문자열 전용 입출력 함수 gets,puts]");
	CharAry3();
	printf("\n[알파벳 대문자를 소문자로,소문자를 대문자로 바꾸는 프로그램]\n");
	CharAry4();
}
/*NULL: char 배열에서 남는 배열 요소에 자동으로 NULL문자가 들어간다. 아스키 코드 값이 0인 문자가 들어간다. 
 널 문자는 문자열의 끝을 표시하는 용도로 쓰인다. printf 함수는 char형 배열에서 널 문자가 나올 때까지만 출력하도록 만들어져있다.
 sanf함수는 입력 문자 마지막에  자동으로 null 문자가 채워진다. 이러한 규칙은 문자열을 처리하는 모든 함수에 적용된다.*/ 
void CharAry1()
{
	char str[10]="network";
	
	printf("최초 문자열 : %s",str);
	printf("\n문자열 입력 :");
	scanf("%s",str);
	// scanf에서 &를 사용하지 않은 이유는?? &는 해당 변수의 주소를 가리키는 역할,
	// scanf 구동 방식 : 입력 -> 레지스터 임시저장 -> 변수의 주소로 찾아가 주소가 가리키는 메모리의 레지스터에 저장 -> 레지스터에 있던 값은 지움 
	// int나 double과 같은 데이터형은 변수의 주소가 필요하기 때문에 &를 써주어야 한다.
	// 하지만 문자배열과 같은 데이터형은 변수 자체가 주소이기 때문에 안써도 된다.(포인터 일 때도 마찬가지)  
	printf("\n입력 된 문자열 : %s",str);
	
	//char 배열 선언 시 초기화를 하면 남는 배열요소가 자동으로 문자열 끝에 널 문자가 저장되나,
	//초기화 하지 않은 상태에서, 배열요소에 문자를 직접 대입한다면 반드시 문자열 끝에 '/0'(널문자)를 입력해야한다.
	
	char str2[10];
	str2[0]='n';
	str2[1]='e';
	str2[2]='t';
	str2[3]='w';
	str2[4]='o';
	str2[5]='r';
	str2[6]='k';
	str2[7]='\0';
	
	printf("\nstr2 = %s\n",str2);
}
/*strcpy 함수는 char형 배열에 새로운 문자열을 저장하는 함수로, 저장할 문자열의 길이를 파악하여 딱 그 길이 만큼만 char형 배열에
  복사한다. 당연하게도 문자열 끝에 자동으로 널 문자도 붙여 준다.*/

void CharAry2()
{
	char str1[20] = "network";
	char str2[20];
	// strcpy 사용법 : strcpy(저장될 배열명, 저장할 문자열) 대입하는 연산으로 생각해도 무난하다. 
	strcpy(str1,"OSI7Layer"); // str1 배열에 "OSI7Layer"를 복사 
	strcpy(str2,str1); // str2 배열에 str1 배열을 복사 
	printf("\nstr1 = %s, str2 = %s\n",str1,str2);
}

/*문자열 전용 입출력 함수*/
// scnaf 함수는 빈칸이 있을때 빈칸 전까지 만 입력된다. 따라서 빈칸을 포함한 새로운 문자열 입력 방식이 필요하다. 
void CharAry3()
{	// Q: 왜 gets,puts를 사용할수 없을까!!!!????? 
	char str[80];
	printf("\n문자열 입력: ");
	gets(str);
	//printf("\nprintf 입력된 문자열: %s",str);
	puts("\nputs 입력된 문자열: ");
	puts(str);
}


/* 대문자는  소문자로, 소문자는 대문자로 변환하는 프로그램 */	
void CharAry4()
{
	int i;
	char ary1[50];
	char ary2[50];
	const int change = 32;
	
	printf("\n문자를 입력하세요,단 띄어쓰기는 안댐 : ");
	scanf("%s",ary1);
	printf("\n변환 전 [%s]",ary1);
//	printf("\n[%c]",ary1[0]); 
//	ary2[0]=ary1[0]+change;
//	printf("\n[%c]",ary2[0]); 


	for(i=0; i<=50; i++)
	{
		if(('A' <= ary1[i]) && (ary1[i] <= 'Z')) {	
			ary2[i] = (char)(ary1[i]+change);
		}
		else if(('a' <= ary1[i]) && (ary1[i] <= 'z')) {	
			ary2[i] = (char)(ary1[i]-change);
		} 
		if(ary1[i]==0)
		{   
			ary2[i]=0;
			break;
		}
		else
		{
			break;
		}
		
	}
	printf("\n변환 후 [%s]",ary2);	
}	
	
