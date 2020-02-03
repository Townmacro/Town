#include<stdio.h>
int main()
{
	int account, x;
	scanf("%d", &account);
	x = account / 100000;
	switch (x)
	{
	case 1:
		printf("Hunan Agricultural University");
		break;
	case 2:
		printf("Jishou University");
		break;
	case 3:
		printf("Huaihua University");
		break;
	case 4:
		printf("Aerospace University");
		break;
	case 5:
		printf("Ocean University");
		break;
	}
	return 0;
}
