#include<stdio.h>
#include<math.h>
int main() {
	int a,max,min,sum,z,flag;
	char c[105];
	scanf("%d", &a);
	while (a--) {
		max = 0;
		min = 1000;
		flag = 0;
		scanf("%s", c);
		for (int i = 0; c[i] != '\0'; i++)
		{
			sum = 0;
			if (c[i] == '1') continue;
			for (int j = 0 ; c[i+j] != '\0'; j++)
			{
				if (c[i] == c[i+j]) 
				{
				sum++ ;
				if (j != 0)
				c[i+j] = '1';
				}
			}

			if (sum > max) 
				max = sum;
			if (sum < min) 
				min = sum;
		}
		z = sqrt(max - min);
		for (int i = 2; i <= z; i++)
		{
			if ((max - min) % i == 0)  
			{
				flag = 1;
				break ;
			}
		}
		if (flag == 0 && max - min != 0 && max - min != 1) 
		{
			printf("Lucky Word\n%d\n",	max - min);
		}
		else printf("No Answer\n0\n");

	}
} 
