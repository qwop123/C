// �б⹮ , ���� ������ 
#include <stdio.h>

int Scan()
{
	int select;
	scanf_s("%d", &select);
	if (select < 2 || select > 99)
		return 0;
	return select;
}

void ThreeFive(int n) // ���� (int�� ����) ���� �䱸
{
	if (n % 3 == 0 && n % 5 == 0)
	{
		printf("%d�� 3�� 5�� ������� �½��ϴ�.\n", n);
	}
	else
	{
		printf("%d�� 3�� 5�� ������� �ƴմϴ�.\n", n);

	}
}
void main()
{
	int Number = Scan();
	// 3�� 5�� ����� 1 < N < 100 -> N�� 2���� 99������ �����ϴ�.
	// 3 * 5 -> 15 � ���ڸ� 3�� 5�� �������� �������� �Ѵ� 0�� ���
	if (Number == 0)
	{
		printf("�߸��� ���ڸ� �Է��ϼ̽��ϴ�.\n");
	}
	else
	{
		ThreeFive(Number);
	}
	

	/*if (Number == 3)
	{
		printf("���� ���ڴ� 3�̴�\n");
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
	////  ���� ? ���� : ���� 

	//printf("�� �Ŀ� : %d\n", Power);

	/*const int JobWarrior = 1;
	const int JobMage = 2;
	const int JobStudent = 3;

	int MyJob = 2;

	scanf_s("%d", &MyJob);

	if (JobWarrior == MyJob)
		printf("���� �������Դϴ�\n");	
	if (JobMage == MyJob)
		printf("���� �������Դϴ�\n");	
	if (JobStudent == MyJob)
		printf("���� �л��Դϴ�\n");*/
	// �б⹮�� ���� �߰�ȣ�� �ʿ��� �༮���� �߰�ȣ�� �ȳ־��ָ�
	// �� ������ ������ 1���� �ڵ����� �߰�ȣ�� �����ش�.
	


	//int Level = 50;
	//printf("�� ������ %d�̴�.\n", Level);
	//// ���� ����
	//const int JobLevel = 50;
	//// ������������ �� ������ ���ų� ������� ������ �����ϴ�.
	//
	//printf("���� ���� ������ %d�̴�.\n", JobLevel);
	//// �б⹮
	//if (Level >= JobLevel) // ���࿡ ���� ���赵 -> ����
	//{
	//	printf("������ �����մϴ�!\n");
	//}
	//else // if�� ������ �߸������� �����϶�
	//{
	//	printf("������ �Ұ����մϴ�!\n");
	//}
}