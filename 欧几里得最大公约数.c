#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b:\n");
	scanf("%d %d", &a, &b);
	c = b;
	while (c != 0)            //շת��������Լ��
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("a��b���Լ��Ϊ %d\n", b);
	return 0;
}