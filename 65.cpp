#include<stdio.h>
int main () {
	int a, b, sum, x;
	scanf("%d", &a);
	while(a--) 
	{
		scanf("%d", &b);
		sum = 0;
		for (int j = b; j != 0; j--)
		{
			x = 1;
		for (int i = j; i > 0; i -= 2)
		{
			if (i % 2 == 0) i -= 1;
			x *= i;
		}
		sum += x;
		}
		printf("%d\n", sum);
	}
}
