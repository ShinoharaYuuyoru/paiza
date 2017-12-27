#include "stdio.h"

int main()
{
	int n;
	int x;

	scanf("%d", &n);

	for (x = 1;;)
	{
		n = n / 10;
		if (n > 0)
		{
			x++;
		}
		if (n == 0)
		{
			break;
		}
	}

	printf("%d\n", x);

	return 0;
}