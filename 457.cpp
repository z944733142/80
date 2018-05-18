#include<stdio.h>
#include<string.h>
int main()
{
	int a;
	long long b;
	scanf("%d", &a);
	getchar();
	while(a--)
	{

		scanf("%lld", &b);
				if (b == 1)
		{
			printf("471\n");
			continue;
		}
		printf("%lld471\n", b-1);
	}
	
}
