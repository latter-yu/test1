#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1000;
	while (a >= 1000 && a <= 2000)
	{
		if (a%4 == 0 && a%100 != 0)
		{
			printf("%d\n", a);
		}
		if (a % 400 == 0)
		{
			printf("%d\n", a);
		}
		a++;
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 6;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = (right + left) / 2;
		if (k < arr[mid])
		{
			right = mid - 1;
		}
		else if (k > arr[mid])
		{
			left = mid + 1;
		}
		else
			break;
	}
	if (left <= right)
	{
		printf("�ҵ��ˣ����ֵ��±��ǣ�mid = %d\n", mid);
	}
	else
		printf("�Ҳ���\n");
	return 0;
}
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("************************\n");
	printf("****** ��������Ϸ ******\n");
	printf("****** 1.play  ******\n");
	printf("****** 0.exit ******\n");
	printf("************************\n");
}
void game()
{
	int ret = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		int guess = 0;
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}

#include<stdio.h>
int main()
{
	int num = 0;
	printf("������һ������");
	scanf("%d", &num);

}
