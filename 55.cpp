#include<stdio.h>
#include<stdlib.h>
int inc(const void * a,const void * b)
{
	return *(int *)a - *(int *)b;
}
int main ()  {
	int a, b, c[100000], ch, t, prev, j, k, key;
	long  sum;
	scanf("%d", &a);
	while(a--) {
		ch = 1;
		sum = 0;
		scanf("%d", &b);
		for (int j = 0; j < b; j++) {
			scanf("%d", &c[j]);
		}
		if (b == 1) {
			printf("%d\n", c[0]);
			continue;
		}
		for (k = 1; k < b; k++) {
			qsort(c,b,sizeof(c[0]),inc);
			c[0] = c[0] + c[1];
			c[1] = 100000;
			sum += c[0];
		}
		printf("%ld\n", sum);
	}
}
