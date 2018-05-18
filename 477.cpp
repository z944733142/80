#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	float b, c, e;
	scanf("%d", &a);
	while(a--)
	{
		scanf("%f %f %f", &b, &c, &e);
		if(fabs(c + b - e) < 1e-6)  printf("Yes\n");
		else printf("No\n");
	}
 } 
