#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{

	printf("******************\n");
	printf("   1.��ʼ��Ϸ\n");
	printf("   2.�˳���Ϸ\n");
	printf("******************\n");

}

void game()
{

	
	int s = rand()%100+1;
	

	while (1)
	{
		printf("�������\n");
		int guess = 0;
		scanf("%d", &guess);
		if (guess == s)
		{
			printf("�¶��˹�����\n");
			break;
		}
		else if(guess>s)
		{
			printf("�´���\n");

		}
		else
		{

			printf("��С��\n");

		}
	}


}

int main()
{
	srand((unsigned int)time(NULL));//����һ�����
	int x = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
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




		
