#include<stdio.h>
int main () {
	int a, b, sum, max, zhi, j;
	long c[105];
	scanf("%d", &a);
	while(a--)
	{
		max = 0;
		scanf("%d", &b);
		for(int i = 0; i < b; i++)
		{
			scanf("%d", &c[i]);
		}
		for(int i = 0; i < b; i++)
		{
			sum = 0;
			for(j = i; j < b; j++)
			{
				if ( c[i] == c[j]) 
				{
					sum ++;
				}
			}
			if (sum > max)
			{
				max = sum;
				zhi = c[i];
			}
			
		}
		printf("%d %d\n", zhi, max);
	}
}
