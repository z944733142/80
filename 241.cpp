#include<stdio.h>
#include<string.h>
int main()
{
	int a, s, key, i, j, sum;
	char c[1015];
	
	scanf("%d", &a);
	getchar();
	while(a--)
	{
		gets(c);
		sum = 0;
		for (i = 0; i < (int)strlen(c); i++)
		{
			s = 0;	
			if (c[i] == 17) 
				{
					continue;
				}
			for (j = i; j < strlen(c); j++)
			{
				if (c[i] == c[j])
				{
					s++;
					if (j != i) c[j] = 17;
				}
			} 
			if (s > sum) 
			{
				key = i;
				sum = s;
			} 
			if (s == sum)
			{
				if(c[key] > c[i]) key = i;
			}
		}
		printf("%c\n", c[key]);
		
	}
}
