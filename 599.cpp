#include<stdio.h>
int main()
{
	int a, sum, b, i;
	scanf("%d", &a);
	while(a--)
	{
		sum = 0;
		scanf("%d", &b);
		for(i = 1; 1; i++)
		{
			sum += 10;
			if (sum >= b) break;
			sum -= 5;
		}
		printf("%d\n", i);
	}
}
