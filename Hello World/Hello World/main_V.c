// Value
#include <stdio.h>

void main()
{
	// 게임 개발
	// 여러명 -> 싱글
	// 컨텐츠 -> 많이 필요하진 않음 -> 기획자
	// 저장 만렙, 유니크 전설 Save X ??  서버 롤백
	// 저장 프로그래머 중요!
	// 어떤 저장? 변수
	1; // 레벨업
	// 변수란 ?
	// 게임 혹은 프로그램에서 숫자를 저장하기 위한 공간
	/*printf("Level : %d\n", 1);
	printf("Level : %d\n", 2);*/
	// ? 공간 -> 공간을 사용 X
	// 컴퓨터를 살때 RAM 16GB 8GB -> 공간을 뜻
	// 8GB 공간 16GB 2배
	// 고사양 -> RAM 많이
	//Level = 1; // = 대입 연산자 오른쪽에 있는 숫자를 왼쪽에 대입하라.
	// 알려줘야함.
	// OS한테.
	// 공간 내 마음대로X 
	// 숫자가 겹치게 될 수 있다.
	// OS에게 이러한 변수를 나는 만들겠다. ( 공간을 이용 )
	// 자료형 숫자(레벨) 공간을 받을거야
	// 공간을 무한히
	// 공간의 크기 유한 8GB , 16GB
	// 공간의 크기가 바로 자료형
	int; // 4
	char; // 1
	float; // 4
	short; // 2
	double;
	long;
	//int Level; // Level 이라는 변수를 만들겠다. Level이라는 공간을 OS에게 사용하겠다고 말한다.
	//Level = 1;
	//printf("Level : %d\n", Level);
	//Level = Level + 1;
	//printf("Level : %d\n", Level);
	1000000000;
	// 디아블로 2 99 내렙 -> 1000000
	// 자료형들은 크기 공간의 용량 다름.
	// int -> -21억 ~ + 21억
	// int 공간의 크기 -> 0과 1만 -> 이진수
	// 이진수 자리수 이진수로 두자리수 -> 00 01 10 11 -> 4개의 숫자 3
	// Byte -> 8GB -> 1TB -> 1Byte -> 8Bit -> 0과 1을 표현하는 2진수의 한 자리수
	// 4Byte -> 32Bit -> 2진수 32개의 자리수
	// 자료형의 공간 크기
	//printf("%d\n", sizeof(int)); // 4Byte
	// 32bit -> 2＾32 -> -2＾16 , +2＾16 21억
	// char -> 1Byte 2＾8
	// char Level = 99;
	/*int Level = 10024;

	Level = 1;
	Level = 2;
	Level = 3;*/
	// 상수 -> ? 이름이 없는 숫자
	// 1, 2 -> 1 = 2;
	const int LevelMax = 99; // CONST -> 현재 변수는 상수화
	// LevelMax = 1;
	int Level = 1;
	printf("Level : %d\n", Level);
	float Critical = 25.13; // 이진수
	printf("Critical : %f\n", Critical);
	// 자료형 변수를 저장 방법을 다르게 저장
	// 정수만 저장되는 자료형 , 실수만 저장하는 자료형
	// int, char, short, long 정수
	// float, double  실수


}