#include<stdio.h>
int main () {
	int a, m, sum;
	scanf("%d", &a);
	while(a--)
	{
		sum = 0;
		scanf("%d", &m);
		while ( m >= 1)
		{
			if (m % 2 == 1)
				sum++;
			m = m/2;
		}
		printf("%d\n", sum);
	}
}
