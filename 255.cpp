#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, ch, t, sum;
	int * c;
	
	scanf("%d", &a);
	while(a--)
	{	ch = 1;
		sum = 1;
		scanf("%d", &b);
		c = (int *) malloc (sizeof(int) * b);
		for(int i = 0; i < b; i++)
		{
			scanf("%d", &c[i]);
		} 
		 while(ch)
		 {
		 	ch = 0;
		 	for(int j = 0; j < b - 1; j++)
		 	{
		 		if (c[j] > c[j+1])
		 		{
		 			t = c[j];
		 			c[j] = c[j+1];
		 			c[j+1] = t;
		 			ch = 1;
				 }
			}
		 }
		for (int k = 0; k < b - 1; k++)
		{
			if(c[k] != c[k+1]) sum++;
		}
		printf("%d\n", sum);
		for (int k = 0; k < b; k++)
		{
			if(k != b - 1 && c[k] != c[k+1]) printf("%d ", c[k]);
			if(k == b - 1) printf("%d\n", c[k]) ;
		}
	}
}
