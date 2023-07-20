#include <stdio.h>
void num(int N)
{
	int r = N % 2;
	if (r == 0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}
int main()
{
	int N=79651;
	num(N);
	return 0;
}
