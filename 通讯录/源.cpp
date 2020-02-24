#define _CRT_SECURE_NO_DEPRECATE

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<conio.h>

int people = 0, remaining_space = 50;    //ͨѶ¼�����޶�
int num = 0;

struct MyStruct				//ͨѶ¼�ṹ��Ϣ
{
	int number;
	char name[20];
	char contact_number[20];
};

MyStruct S[50];
MyStruct temp;     //���򽻻�

void menu();          //�˵�
void interface();     //����
void add();           //���
void delete_();       //ɾ��
void modify();        //�޸�


int main()     //������
{
	printf("========== ͨѶ¼ ==========\n\n");
	interface();
	menu();
	while (true)
	{
		int choose;
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:				//���
			add();
			system("cls");
			printf("========== ͨѶ¼ ==========\n\n");
			interface();
			menu();
			break;
		case 2:				//ɾ��
			delete_();
			system("cls");
			printf("========== ͨѶ¼ ==========\n\n");
			interface();
			menu();
			break;
		case 3:				//�޸�
			modify();
			system("cls");
			printf("========== ͨѶ¼ ==========\n\n");
			interface();
			menu();
			break;
		case 4:				//�˳�
			return 0;
		default:
			printf("Error!!!\n�������ָ��, ����������:");
		}
	}
}


//�˵�
void menu()
{
	printf("\n\n�����б�:\n1)���          2)ɾ��\n3)�޸�          4)�˳�����\n���������: ");
}

//����
void interface()
{
	printf("========== ���� ==========\n");
	printf("������ %d ��           | ʣ��ռ䣺 %d ��\n", people, remaining_space);

	//��Ϣ��������
	if (people > 1)
	{
		for (size_t i = 0; i < people; i++)
		{
			for (size_t j = 0; j < people; j++)
			{
				if (S[i].number < S[j].number)
				{
					temp.number = S[i].number;
					S[i].number = S[j].number;
					S[j].number = temp.number;
					strcpy(temp.name, S[i].name);        //��Ϣ����
					strcpy(S[i].name, S[j].name);
					strcpy(S[j].name, temp.name);
					strcpy(temp.contact_number, S[i].contact_number);
					strcpy(S[i].contact_number, S[j].contact_number);
					strcpy(S[i].contact_number, temp.contact_number);

				}
			}
		}
	}

	//���
	if (people != 0)
	{
		for (int i = 0; i < people; i++)
		{
			printf("���:  %d | ����: %s | �绰: %s\n", S[i].number, S[i].name, S[i].contact_number);
		}
	}
}

//���
void add()
{
	int flag = 1;
	if (remaining_space == 0)
	{
		printf("ͨѶ¼����\n");
	}
	else if (flag != 0)
	{
		printf("��Ӳ�����\n���������λ��:");
		scanf("%d", &S[people].number);
		if (S[people].number > 50)
		{
			printf("�����ų�����ֵ");
			_getch();
			flag = 0;
		}
		for (size_t i = 0; i < people; i++)
		{
			if (S[i].number == S[people].number)
			{
				printf("�˴���������");
				_getch();
				flag = 0;
			}
		}
		if (flag != 0)
		{
			printf("��������ϵ������:");
			scanf("%s", &S[people].name);
			printf("��������ϵ�˵绰:");
			scanf("%s", &S[people].contact_number);
			people++;
			remaining_space--;
		}
	}
}

//ɾ��
void delete_()
{
	int n, flag = 1;
	printf("ɾ��������\n������ɾ��λ��: ");
	scanf("%d", &n);
	if (n > 50)
	{
		printf("�����ų�����ֵ");
		flag = 0;
		_getch();
	}
	for (size_t i = 0; i <= people; i++)
	{
		if (n == S[i].number)
		{
			//memset(&S[n], 0, sizeof(MyStruct));   //�ṹ������ĳһ����Ϣɾ��
			for (size_t j = 0; j < 49; j++)
			{
				S[j] = S[j + 1];
			}
			people--;
			remaining_space++;
			flag = 0;
		}
	}
	if (flag != 0)
	{
		printf("�˴�������");
		_getch();
	}
}

//�޸�
void modify()
{
	int i, flag = 1, n;
	char name[10];
	char contact_number[12];
	printf("�޸Ĳ���\n�������޸�λ��: ");
	scanf("%d", &n);
	if (n > 50)
	{
		printf("�����ų�����ֵ");
		_getch();
		flag = 0;
	}
	else
	{
		for (i = 0; i < people; i++)
		{
			if (n == S[i].number)
			{
				printf("�Ѳ���ԭ����Ϣ�������¼���\n");
				printf("��������ϵ������:");
				scanf("%s", &name);
				strcpy(S[i].name, name);
				printf("��������ϵ�˵绰:");
				scanf("%s", &contact_number);
				strcpy(S[i].contact_number, contact_number);   
				flag = 0;
			}
		}
		if (flag == 1)
		{
			printf("�˴�������");
			_getch();
		}
	}
}