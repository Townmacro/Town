#include<stdio.h>

void First_grade_problem()
{
	printf("现在是一年级题目：\n执行完了（学习使你快乐\n\n");
}

void Second_grade_problem()
{
	printf("现在是二年级题目：\n执行完了（学习使你快乐\n\n");
}

void Third_grade_problem()
{
	printf("现在是三年级题目：\n执行完了（学习使你快乐？\n\n");
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
			First_grade_problem();
			menu();
			break;
		case 2:
			Second_grade_problem();
			menu();
			break;
		case 3:
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