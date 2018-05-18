#include<stdio.h>
int main()
{
	int a, b, sum;
	scanf("%d", &a);
	while(a--)
	{
		sum = 0;
		scanf("%d", &b);
		for (int i = 1; i <= b;i++)
		{
			sum += (i+1) * i / 2;
		}
		printf("%d\n", sum);
	}
}
