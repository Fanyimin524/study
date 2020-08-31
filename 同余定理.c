//对于同一个除数，如果两个整数同余，那么他们的差就一定能被这个数整除
//大数在编程中表示超过32位二进制的数，不能直接求模，只能对其分块求模

//应用公式：（a+b）%m=(a%m+b%m)%m

//分解高精度数：1234=((1*10+2)*10+3)*10+4

//例题：求2001的2003次方除以13的余数
#include <stdio.h>
#include <math.h>
int x, num, m;
int main()
{
	//输入数字
	printf("输入x的num次幂：\n");
	scanf("%d %d", &x, &num);
	printf("输入模：\n");
	scanf("%d", &m);

	//开始从2001的1次幂求余数，寻找余数规律
	int i, j, a[100];   //a[100]存放余数
	i = 0, j = 0;
	
	while (1)
	{
		j =(int)(pow(x, i+1)) % m;
		a[i] = j;
		i++;
		if (j == 1)
			break;
	}

	j = num % i - 1;   //求得余数在a[100]中的位置

	printf("%d的%d次幂的余数为：%d\n", x, num, a[j]);

	return 0;
}
