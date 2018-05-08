#include<stdio.h>
int main ()
{
	int n, k, c[1005] = {0};
	scanf("%d %d", &n, &k);
	if (n == 1)
	{
		for (int i = 0 ; i< k ; i++)
		printf("1 ");
	}
	for (int i = 1; i <= k; i++)
		for (int j = 1; j <= n; j++) 
			if (j % i == 0) 
			{
				if (c[j] == 1) c[j] = 0; 
				else  c[j] = 1;
			}	
	for (int i = 1; i <= n; i++)
	if (c[i] == 1) printf("%d ", i);
} 
