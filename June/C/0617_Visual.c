#include <stdio.h>



int main()
{
	int i,j;
	/*hello Visual Studio*/
	printf("hello,Visual!");
	


	printf("\n\n[구구단 세로열]\n");
	/*세로열 구구단 TEST*/
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("\n%d*%d=%02d   |", i, j, i * j);
		}
		printf("\n---------_");
	}
	printf("\n");
	i = 0;
	j = 0;

	printf("\n\n[구구단 가로열]\n\n");
	/*가로열 구구단 TEST*/
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("|%d * %d = %02d|", j, i, i * j);
		}
		printf("\n");
	}
	
	return;
}