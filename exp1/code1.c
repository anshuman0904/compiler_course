#include <stdio.h>

int mul(int a, int b)
{
	return a*b;
}
int main()
{
	int a = 10;
	int b = 30;
	int ans = mul(a, b);
	printf("%d", ans);
}