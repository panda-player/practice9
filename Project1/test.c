#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{

	printf("******************\n");
	printf("   1.开始游戏\n");
	printf("   2.退出游戏\n");
	printf("******************\n");

}

void game()
{

	
	int s = rand()%100+1;
	

	while (1)
	{
		printf("请猜数字\n");
		int guess = 0;
		scanf("%d", &guess);
		if (guess == s)
		{
			printf("猜对了哈哈哈\n");
			break;
		}
		else if(guess>s)
		{
			printf("猜大了\n");

		}
		else
		{

			printf("猜小了\n");

		}
	}


}

int main()
{
	srand((unsigned int)time(NULL));//设置一个起点
	int x = 0;
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d",&x);
		switch (x)
		{
		case 1:


			game();

			break;
				
		case 2:
			break;


		}

		


	}
	while (x == 1);
		


	return 0;
	
}




		
