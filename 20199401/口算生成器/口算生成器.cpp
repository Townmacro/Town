#include<stdio.h>

void First_grade_problem()
{
	printf("������һ�꼶��Ŀ��\nִ�����ˣ�ѧϰʹ�����\n\n");
}

void Second_grade_problem()
{
	printf("�����Ƕ��꼶��Ŀ��\nִ�����ˣ�ѧϰʹ�����\n\n");
}

void Third_grade_problem()
{
	printf("���������꼶��Ŀ��\nִ�����ˣ�ѧϰʹ����֣�\n\n");
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