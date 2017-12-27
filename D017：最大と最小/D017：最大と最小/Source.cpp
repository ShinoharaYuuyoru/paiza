#include "stdio.h"

int main()
{
	int a;
	int n;
	int min = 999;
	int max = -1;

	for (n = 0;n < 5;n++)
	{
		scanf("%d", &a);
		if (a < min)
		{
			min = a;
			
		}
		if (a > max)
		{
			max = a;
		}
	}

	printf("%d\n%d\n", max, min);

	return 0;
}