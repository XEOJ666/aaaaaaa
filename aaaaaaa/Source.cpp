#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	if (n < 0)
	{
		printf("Error");
	}
	for (int x = 1; x <= n; x++)
	{
		for (int y = 1; y <= n; y++)
		{
			printf("* ");
		}
		printf("\n");
	}
}