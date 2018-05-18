#include<stdio.h>
int main()
{
	int a, b, c, d;
	char e;
	scanf("%d", &a);
	getchar();
	while(a--)
	{
		b = 0;
		c = 0;
		d = 0;
		while((e = getchar()) != '\n')
		{
			if (e == 'R') b++;
			if (e == 'W') c++;
			if (e == 'B') d++;
		}
		for (int i = 0; i < b;i++) printf("R");
		for (int i = 0; i < c;i++) printf("W");
		for (int i = 0; i < d;i++) printf("B");
		printf("\n");
	}
	
}
