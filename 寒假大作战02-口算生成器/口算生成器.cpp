#include<stdio.h>
#include<stdlib.h>

void First_grade_problem()                                            //һ�꼶��Ŀ
{
	int n;
	char symbol[] = { '+','-' };        //�ʺ�һ�꼶�������
	scanf("%d", &n);
	for (size_t i = 0; i < n; i++)
	{
		printf("%d %c %d=____\n", rand() % 10, symbol[rand() % 2], rand() % 10);
	}
}

void Second_grade_problem()      //���꼶����
{
	int n;
	char symbol[] = { '*','/' };               //�ʺ϶��꼶�������
	scanf("%d", &n);
	for (size_t i = 0; i < n; i++)
	{
		if (rand() % 2 == 1)               //�жϷ����Ƿ�Ϊ��/���š��������ǳ��ţ����ź����ֵ����Ϊ0
		{
			printf("%2d %c %2d=____\n", rand() % 100, symbol[1], 1 + rand() % 99);
		}
		else
		{
			printf("%2d %c %2d=____\n", rand() % 100, symbol[0], rand() % 100);
		}
	}
}

void Third_grade_problem()     //���꼶����
{
	int n, symbol1, symbol2;
	char symbol[] = { '+','-','*','/' };
	scanf("%d", &n);
	for (size_t i = 0; i < n; i++)
	{
		if (rand() % 4 == 3)                //�������Ƿ��г���
		{
			symbol1 = rand() % 4;
			symbol2 = rand() % 4;
			if (symbol1 == 3)              //��һ������Ϊ����
			{
				printf("%2d %c %2d ", rand() % 100, symbol[3], 1 + rand() % 99);
			}
			else
			{
				printf("%2d %c %2d ", rand() % 100, symbol[rand() % 3], rand() % 100);
			}
			if (symbol2 == 3)                     //�ڶ�������Ϊ����
			{
				printf("%c %2d=____\n", symbol[3], 1 + rand() % 99);
			}
			else
			{
				printf("%c %2d=____\n", symbol[rand() % 3], rand() % 100);
			}
		}
		else             //������û�г���
		{
			printf("%2d %c %2d %c %2d=____\n", rand() % 100, symbol[rand() % 3], rand() % 100, symbol[rand() % 3], rand() % 100);
		}
	}
}

void menu()            //�˵�����
{
	printf("�����б�\n1��һ�꼶    2)���꼶    3)���꼶\n4)����      5)�˳�����\n");
}

void help()           //�����б�
{
	printf("������Ϣ\n����Ҫ����������������в���, ��\nһ�꼶��ĿΪ������ʮλ�ļӼ���;\n���꼶��ĿΪ��������λ�ĳ˳���;\n���꼶��ĿΪ��������λ�ļӼ��˳������Ŀ.\n\n");
}

void error()          //����ֵ����
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