#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b:\n");
	scanf("%d %d", &a, &b);
	c = b;
	while (c != 0)            //辗转相除求最大公约数
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("a和b最大公约数为 %d\n", b);
	return 0;
}