#include<stdio.h>
#include<stdlib.h>

void First_grade_problem()
{
	int n;
	char symbol[] = { '+','-' };
	scanf("%d", &n);
	for (size_t i = 0; i < n; i++)
	{
		int number1 = rand() % 10, number2 = rand() % 10;
		if (rand() % 2 == 0)
		{
			printf("%d %c %d = %d\n", number1, symbol[0], number2, number1 + number2);
		}
		else
		{
			printf("%d %c %d = %d\n", number1, symbol[1], number2, number1 - number2);
		}
	}
}

void Second_grade_problem()
{
	int n;
	char symbol[] = { '*','/' };
	scanf("%d", &n);
	for (size_t i = 0; i < n; i++)
	{
		int number1 = rand() % 100, number2 = rand() % 100, number3 = 1 + rand() % 99;
		if (rand() % 2 == 0)
		{
			printf("%2d %c %2d=%d\n", number1, symbol[0], number2, number1 * number2);
		}
		else
		{
			printf("%2d %c %2d=%g\n", number1, symbol[1], number3, (double)number1 / number3);
		}
	}
}

void Third_grade_problem()
{
	int n, symbol1, symbol2;
	char symbol[] = { '+','-','*','/' };
	scanf("%d", &n);
	for (size_t i = 0; i < n; i++)
	{

		symbol1 = rand() % 4;
		symbol2 = rand() % 4;
		if (symbol1 == 3)
		{
			int number1 = rand() % 100, number2 = 1 + rand() % 99;
			printf("%2d %c %2d ", number1, symbol[3], number2);
			if (symbol2 == 3)
			{
				int number3 = 1 + rand() % 99;
				printf("%c %2d=%g\n", symbol[3], number3, (double)number1 / number2 / number3);
			}
			else if (symbol2 == 2)
			{
				int number3 = rand() % 100;
				printf("%c %2d=%g\n", symbol[2], number3, (double)number1 / number2 * number3);
			}
			else if (symbol2 == 1)
			{
				int number3 = rand() % 100;
				printf("%c %2d=%g\n", symbol[1], number3, (double)number1 / number2 - number3);
			}
			else if (symbol2 == 0)
			{
				int number3 = rand() % 100;
				printf("%c %2d=%g\n", symbol[0], number3, (double)number1 / number2 + number3);
			}
		}
		else if (symbol1 == 2)
		{
			int number1 = rand() % 100, number2 = rand() % 100;
			printf("%2d %c %2d ", number1, symbol[2], number2);
			if (symbol2 == 3)
			{
				int number3 = 1 + rand() % 99;
				printf("%c %2d=%g\n", symbol[3], number3, (double)number1 * number2 / number3);
			}
			else if (symbol2 == 2)
			{
				int number3 = rand() % 100;
				printf("%c %2d=%d\n", symbol[2], number3, number1 * number2 * number3);
			}
			else if (symbol2 == 1)
			{
				int number3 = rand() % 100;
				printf("%c %2d=%d\n", symbol[1], number3, number1 * number2 - number3);
			}
			else if (symbol2 == 0)
			{
				int number3 = rand() % 100;
				printf("%c %2d=%d\n", symbol[0], number3, number1 * number2 + number3);
			}
		}
		else if (symbol1 == 1)
		{
			int number1 = rand() % 100, number2 = rand() % 100;
			printf("%2d %c %2d ", number1, symbol[1], number2);
			if (symbol2 == 3)
			{
				int number3 = 1 + rand() % 99;
				printf("%c %2d=%g\n", symbol[3], number3, (double)number1 - number2 / number3);
			}
			else if (symbol2 == 2)
			{
				int number3 = rand() % 100;
				printf("%c %2d=%d\n", symbol[2], number3, number1 - number2 * number3);
			}
			else if (symbol2 == 1)
			{
				int number3 = rand() % 100;
				printf("%c %2d=%d\n", symbol[1], number3, number1 - number2 - number3);
			}
			else if (symbol2 == 0)
			{
				int number3 = rand() % 100;
				printf("%c %2d=%d\n", symbol[0], number3, number1 - number2 + number3);
			}
		}
		else if (symbol1 == 0)
		{
			int number1 = rand() % 100, number2 = rand() % 100;
			printf("%2d %c %2d ", number1, symbol[0], number2);
			if (symbol2 == 3)
			{
				int number3 = 1 + rand() % 99;
				printf("%c %2d=%g\n", symbol[3], number3, (double)number1 + number2 / number3);
			}
			else if (symbol2 == 2)
			{
				int number3 = rand() % 100;
				printf("%c %2d=%d\n", symbol[2], number3, number1 + number2 * number3);
			}
			else if (symbol2 == 1)
			{
				int number3 = rand() % 100;
				printf("%c %2d=%d\n", symbol[1], number3, number1 + number2 - number3);
			}
			else if (symbol2 == 0)
			{
				int number3 = rand() % 100;
				printf("%c %2d=%d\n", symbol[0], number3, number1 + number2 + number3);
			}
		}
	}
}

void menu()
{
	printf("�����б�\n1��һ�꼶    2)���꼶    3)���꼶\n4)����      5)�˳�����\n");
}

void help()
{
	printf("������Ϣ\n����Ҫ����������������в���, ��\nһ�꼶��ĿΪ������ʮλ�ļӼ���;\n���꼶��ĿΪ��������λ�ĳ˳���;\n���꼶��ĿΪ��������λ�ļӼ��˳������Ŀ.\n\n");
}

void error()
{
	printf("Error!!!\n�������ָ��, ����������\n\n");
}

int main()
{
	printf("========== ���������� ==========\n��ӭʹ�ÿ��������� :\n\n������Ϣ\n����Ҫ����������������в���, ��\nһ�꼶��ĿΪ������ʮλ�ļӼ���;\n���꼶��ĿΪ��������λ�ĳ˳���;\n���꼶��ĿΪ��������λ�ļӼ��˳������Ŀ.\n\n�����б�\n1��һ�꼶    2)���꼶    3)���꼶\n4)����      5)�˳�����\n\n���������> ");
	int choose;
	scanf("%d", &choose);
	while (true)
	{
		switch (choose)
		{
		case 1:
			printf("\n\n������һ�꼶��Ŀ��\n���������ɸ���>");
			First_grade_problem();
			menu();
			break;
		case 2:
			printf("\n\n�����Ƕ��꼶��Ŀ��\n���������ɸ���>");
			Second_grade_problem();
			menu();
			break;
		case 3:
			printf("\n\n���������꼶��Ŀ��\n���������ɸ���>");
			Third_grade_problem();
			menu();
			break;
		case 4:
			help();
			menu();
			break;
		case 5:
			printf("�������, ��ӭ�´�ʹ���������������");
			return 0;
		default:
			error();
			menu();
			break;
		}
		printf("���������>");
		scanf("%d", &choose);
	}
	return 0;
}