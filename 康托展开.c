//给定一个n位数的全排列，利用康托展开可以求出一个排列在全排列中的排名
//一个排列的康托展开是他的前述排名减1
//  X=A[0]*(n-1)!+A[1]*(n-2)!+...+A[n-1]*0!
//  A[i]指位置i后小于A[i]值的个数，后面乘的就是后面还有多少个数的阶乘
#include <stdio.h>
int g = 0;   //定义一个全局变量用来保存数字n的位数-1

int main()
{
	int n=0;
	printf("输入一个数:\n");
	scanf("%d", &n);

	printf("康托展开数为：%d", contor(shuzi(n), g));

	return 0;
}
//根据公式可知，可以设置两个数组，一个数组保存阶乘，一个数组保存每一位上的数字。

int contor(int* p, int g)
{
	int X = 0, t[100] = {0}, i, j, h = g, fac = 1;  //X为最终答案，*t保存阶乘。
	for (i = 0; i <=g; i++)    //计算公式中的每项阶乘
	{
		for (j = h; j > 0; j--)
		{
			fac = fac * j;
		}
		h--;
		t[i] = fac;
	}
	for (i = 0; i <= g; i++)
	{
		X = X + t[i] * (p[i]);
	}
	return X;
}


int shuzi(int n)        
{
	int q[100] = { 0 }, p[100] = {0}, i, j, x = 0, h;   //q[0]为个位上的数字，依次类推。p[100]保存每一位后比其小的数字的个数。
	while (n)
	{
		q[g] = n % 10;
		g++;
		n = n / 10;
	}
	h = g;
	for (i = 0; i < g; i++)
	{
		for (j = h; j > 0; j--)
		{
			if (q[h] > q[j])
				x++;
		}
		h--;
		p[i] = x;    //p[0]保存比最高位小的数字，依此类推。
	}
	return *p;
}