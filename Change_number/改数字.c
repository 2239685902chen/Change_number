#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	long q = 0, w = 0, e = 0, r = 0;
	scanf("%ld", &q);
	while (q)
	{
		w = q % 10;
		if (w % 2 == 0)
		{
			w = 0;
		}
		else
		{
			w = 1;
		}
		e = e + w * (long)pow(10, r++);
		q /= 10;
	}
	printf("%ld\n", e);
	return 0;
}