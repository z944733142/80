#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, key, min, t, h, i, j;
	int * b;
	
	while(scanf("%d", &a))
	{
		h = a;
		min = 0x6ffffff;
		key = 0;
		if (a == 0) return 0;
		b = (int *) malloc (sizeof(int) * a);
		for(i = 0; a--; i++)
		{
			scanf("%d", &b[i]);
			if (b[i] < min) 
			{
			key = i;
			min = b[i];
			}
		}
		
		t = b[0];
		b[0] = b[key];
		b[key] = t;
		for (j = 0; j < h; j++)
		{
			printf("%d ", b[j]);
		}
		printf("\n");
		
	}
}
