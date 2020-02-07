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
	printf("操作列表：\n1）一年级    2)二年级    3)三年级\n4)帮助      5)退出程序\n");
}

void help()
{
	printf("帮助信息\n您需要输入命令代号来进行操作, 且\n一年级题目为不超过十位的加减法;\n二年级题目为不超过百位的乘除法;\n三年级题目为不超过百位的加减乘除混合题目.\n\n");
}

void error()
{
	printf("Error!!!\n错误操作指令, 请重新输入\n\n");
}

int main()
{
	printf("========== 口算生成器 ==========\n欢迎使用口算生成器 :\n\n帮助信息\n您需要输入命令代号来进行操作, 且\n一年级题目为不超过十位的加减法;\n二年级题目为不超过百位的乘除法;\n三年级题目为不超过百位的加减乘除混合题目.\n\n操作列表：\n1）一年级    2)二年级    3)三年级\n4)帮助      5)退出程序\n\n请输入操作> ");
	int choose;
	scanf("%d", &choose);
	while (true)
	{
		switch (choose)
		{
		case 1:
			printf("\n\n现在是一年级题目：\n请输入生成个数>");
			First_grade_problem();
			menu();
			break;
		case 2:
			printf("\n\n现在是二年级题目：\n请输入生成个数>");
			Second_grade_problem();
			menu();
			break;
		case 3:
			printf("\n\n现在是三年级题目：\n请输入生成个数>");
			Third_grade_problem();
			menu();
			break;
		case 4:
			help();
			menu();
			break;
		case 5:
			printf("程序结束, 欢迎下次使用任意键结束……");
			return 0;
		default:
			error();
			menu();
			break;
		}
		printf("请输入操作>");
		scanf("%d", &choose);
	}
	return 0;
}