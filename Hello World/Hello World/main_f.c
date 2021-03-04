#include <stdio.h> // 표준 라이브러리 포함 , 함수들을 사용할수 있게

// 시작점 main

void Function()
{
	printf("ABCD %d ABCD", 3); // %d 라는 서식문자의 위치에 쉼표 뒤로오는 숫자를 대신 집어넣어라 -> 3
	// ABCD 3 ABCD
}

void main()	// 프로그램 // void  비어있다 , 값의 반환 , 반환x
{
	printf("Hello World"); // Hello World 출력
	Function(); // Function 이라는 함수를 실행하는 내용!
}

// 컴퓨터 실행 -> 컴퓨터 부팅 -> Windows ? 프로그램
// 대신 실행 아무 함수나 실행 X -> main 