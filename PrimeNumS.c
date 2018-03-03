#include <stdio.h>
/** 
 *	2到100之间的素数
 *	2015-01-12 20:54:34
 */

/**
 * [isPrime 判断m是否是素数]
 * @param  m [description]
 * @return   [description]
 */
bool isPrime(int m)
{
	int i;

	for (i = 2; i < m; ++i)
	{
		if (0 == m%i)
		{
			break;
		}
	}
	if (i == m)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/**
 * [traverseVal 求2到n之间的素数]
 * @param n [description]
 */
void traverseVal(int n)
{

	for (int i = 2; i <= n; ++i)
	{
		if (isPrime(i))
		{
			printf("%d ", i);
		}
	}
}


int main(void)
{
	int val = 100;
	traverseVal(val);

	return 0;
}