// 분기문 , 삼항 연산자 
#include <stdio.h>

int Scan()
{
	int select;
	scanf_s("%d", &select);
	if (select < 2 || select > 99)
		return 0;
	return select;
}

void ThreeFive(int n) // 숫자 (int형 정수) 재료로 요구
{
	if (n % 3 == 0 && n % 5 == 0)
	{
		printf("%d는 3과 5의 공배수가 맞습니다.\n", n);
	}
	else
	{
		printf("%d는 3과 5의 공배수가 아닙니다.\n", n);

	}
}
void main()
{
	int Number = Scan();
	// 3과 5의 공배수 1 < N < 100 -> N은 2부터 99까지만 가능하다.
	// 3 * 5 -> 15 어떤 숫자를 3과 5로 나눴을때 나머지가 둘다 0일 경우
	if (Number == 0)
	{
		printf("잘못된 숫자를 입력하셨습니다.\n");
	}
	else
	{
		ThreeFive(Number);
	}
	

	/*if (Number == 3)
	{
		printf("나의 숫자는 3이다\n");
	}*/
	//int Level = 5;
	//
	//int Power = 1;

	///*if (Level % 2 == 0)
	//{
	//	Power = Power + 1;
	//}
	//else
	//{
	//	Power = Power + 2;
	//}*/

	//Power = (Level % 2 == 0) ? Power + 1 : Power + 2;
	////  조건 ? 진실 : 거짓 

	//printf("내 파워 : %d\n", Power);

	/*const int JobWarrior = 1;
	const int JobMage = 2;
	const int JobStudent = 3;

	int MyJob = 2;

	scanf_s("%d", &MyJob);

	if (JobWarrior == MyJob)
		printf("나는 워리어입니다\n");	
	if (JobMage == MyJob)
		printf("나는 메이지입니다\n");	
	if (JobStudent == MyJob)
		printf("나는 학생입니다\n");*/
	// 분기문문 같은 중괄호가 필요한 녀석한테 중괄호를 안넣어주면
	// 그 다음에 나오는 1개를 자동으로 중괄호를 씌워준다.
	


	//int Level = 50;
	//printf("내 레벨은 %d이다.\n", Level);
	//// 전직 레벨
	//const int JobLevel = 50;
	//// 전직레벨보다 내 레벨이 높거나 같을경우 전직이 가능하다.
	//
	//printf("전직 가능 레벨은 %d이다.\n", JobLevel);
	//// 분기문
	//if (Level >= JobLevel) // 만약에 조건 관계도 -> 진실
	//{
	//	printf("전직이 가능합니다!\n");
	//}
	//else // if의 조건이 잘못됬을때 거짓일때
	//{
	//	printf("전직이 불가능합니다!\n");
	//}
}