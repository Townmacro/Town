#include<stdio.h>
#include<stdlib.h>

void First_grade_problem()                                            //一年级题目
{
	int n;
	char symbol[] = { '+','-' };        //适合一年级的运算符
	scanf("%d", &n);
	for (size_t i = 0; i < n; i++)
	{
		printf("%d %c %d=____\n", rand() % 10, symbol[rand() % 2], rand() % 10);
	}
}

void Second_grade_problem()      //二年级函数
{
	int n;
	char symbol[] = { '*','/' };               //适合二年级的运算符
	scanf("%d", &n);
	for (size_t i = 0; i < n; i++)
	{
		if (rand() % 2 == 1)               //判断符号是否为“/除号”，若果是除号，除号后的数值不能为0
		{
			printf("%2d %c %2d=____\n", rand() % 100, symbol[1], 1 + rand() % 99);
		}
		else
		{
			printf("%2d %c %2d=____\n", rand() % 100, symbol[0], rand() % 100);
		}
	}
}

void Third_grade_problem()     //三年级函数
{
	int n, symbol1, symbol2;
	char symbol[] = { '+','-','*','/' };
	scanf("%d", &n);
	for (size_t i = 0; i < n; i++)
	{
		if (rand() % 4 == 3)                //函数中是否有除号
		{
			symbol1 = rand() % 4;
			symbol2 = rand() % 4;
			if (symbol1 == 3)              //第一个符号为除号
			{
				printf("%2d %c %2d ", rand() % 100, symbol[3], 1 + rand() % 99);
			}
			else
			{
				printf("%2d %c %2d ", rand() % 100, symbol[rand() % 3], rand() % 100);
			}
			if (symbol2 == 3)                     //第二个符号为除号
			{
				printf("%c %2d=____\n", symbol[3], 1 + rand() % 99);
			}
			else
			{
				printf("%c %2d=____\n", symbol[rand() % 3], rand() % 100);
			}
		}
		else             //符号中没有除号
		{
			printf("%2d %c %2d %c %2d=____\n", rand() % 100, symbol[rand() % 3], rand() % 100, symbol[rand() % 3], rand() % 100);
		}
	}
}

void menu()            //菜单函数
{
	printf("操作列表：\n1）一年级    2)二年级    3)三年级\n4)帮助      5)退出程序\n");
}

void help()           //帮助列表
{
	printf("帮助信息\n您需要输入命令代号来进行操作, 且\n一年级题目为不超过十位的加减法;\n二年级题目为不超过百位的乘除法;\n三年级题目为不超过百位的加减乘除混合题目.\n\n");
}

void error()          //输入值错误
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