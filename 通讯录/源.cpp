#define _CRT_SECURE_NO_DEPRECATE

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<conio.h>

int people = 0, remaining_space = 50;    //通讯录人数限定
int num = 0;

struct MyStruct				//通讯录结构信息
{
	int number;
	char name[20];
	char contact_number[20];
};

MyStruct S[50];
MyStruct temp;     //排序交换

void menu();          //菜单
void interface();     //界面
void add();           //添加
void delete_();       //删除
void modify();        //修改


int main()     //主函数
{
	printf("========== 通讯录 ==========\n\n");
	interface();
	menu();
	while (true)
	{
		int choose;
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:				//添加
			add();
			system("cls");
			printf("========== 通讯录 ==========\n\n");
			interface();
			menu();
			break;
		case 2:				//删除
			delete_();
			system("cls");
			printf("========== 通讯录 ==========\n\n");
			interface();
			menu();
			break;
		case 3:				//修改
			modify();
			system("cls");
			printf("========== 通讯录 ==========\n\n");
			interface();
			menu();
			break;
		case 4:				//退出
			return 0;
		default:
			printf("Error!!!\n错误操作指令, 请重新输入:");
		}
	}
}


//菜单
void menu()
{
	printf("\n\n操作列表:\n1)添加          2)删除\n3)修改          4)退出程序\n请输入操作: ");
}

//界面
void interface()
{
	printf("========== 界面 ==========\n");
	printf("人数： %d 人           | 剩余空间： %d 人\n", people, remaining_space);

	//信息界面排序
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
					strcpy(temp.name, S[i].name);        //信息交换
					strcpy(S[i].name, S[j].name);
					strcpy(S[j].name, temp.name);
					strcpy(temp.contact_number, S[i].contact_number);
					strcpy(S[i].contact_number, S[j].contact_number);
					strcpy(S[i].contact_number, temp.contact_number);

				}
			}
		}
	}

	//输出
	if (people != 0)
	{
		for (int i = 0; i < people; i++)
		{
			printf("编号:  %d | 姓名: %s | 电话: %s\n", S[i].number, S[i].name, S[i].contact_number);
		}
	}
}

//添加
void add()
{
	int flag = 1;
	if (remaining_space == 0)
	{
		printf("通讯录已满\n");
	}
	else if (flag != 0)
	{
		printf("添加操作：\n请输入添加位置:");
		scanf("%d", &S[people].number);
		if (S[people].number > 50)
		{
			printf("处理编号超过阈值");
			_getch();
			flag = 0;
		}
		for (size_t i = 0; i < people; i++)
		{
			if (S[i].number == S[people].number)
			{
				printf("此处已有数据");
				_getch();
				flag = 0;
			}
		}
		if (flag != 0)
		{
			printf("请输入联系人姓名:");
			scanf("%s", &S[people].name);
			printf("请输入联系人电话:");
			scanf("%s", &S[people].contact_number);
			people++;
			remaining_space--;
		}
	}
}

//删除
void delete_()
{
	int n, flag = 1;
	printf("删除操作：\n请输入删除位置: ");
	scanf("%d", &n);
	if (n > 50)
	{
		printf("处理编号超过阈值");
		flag = 0;
		_getch();
	}
	for (size_t i = 0; i <= people; i++)
	{
		if (n == S[i].number)
		{
			//memset(&S[n], 0, sizeof(MyStruct));   //结构体数据某一组信息删除
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
		printf("此处无数据");
		_getch();
	}
}

//修改
void modify()
{
	int i, flag = 1, n;
	char name[10];
	char contact_number[12];
	printf("修改操作\n请输入修改位置: ");
	scanf("%d", &n);
	if (n > 50)
	{
		printf("处理编号超过阈值");
		_getch();
		flag = 0;
	}
	else
	{
		for (i = 0; i < people; i++)
		{
			if (n == S[i].number)
			{
				printf("已擦除原有信息，请重新键入\n");
				printf("请输入联系人姓名:");
				scanf("%s", &name);
				strcpy(S[i].name, name);
				printf("请输入联系人电话:");
				scanf("%s", &contact_number);
				strcpy(S[i].contact_number, contact_number);   
				flag = 0;
			}
		}
		if (flag == 1)
		{
			printf("此处无数据");
			_getch();
		}
	}
}