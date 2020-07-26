#include <stdio.h>
int main()
{
	int n, i, j, s;
	printf("«Î ‰»În£∫");
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{   
		s = sqrt(i);
		for (j = 2; j <= s; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > s)
			printf("%d ", i);
	}
	return 0;
}