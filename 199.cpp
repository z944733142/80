#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	float b, c, d, e;
	scanf("%d", &a);
	while(a--)
	{
		scanf("%f %f %f", &b, &c, &d);
		e = sqrt(d*d - (c/2.0)*(c/2.0));
		e = e * 2 ;
		if (e < 1 || 2 * d < c) 
		{
			printf("impossible\n");
			continue;
		}
		b = b / e;
		printf("%d\n",(int)ceil(b));

	}
}

