#include<stdio.h>
int main () {
	int a, key , a1, a2;

	scanf("%d", &a);
	while(a--) 
	{	int b[7] = {0};
		key = -1;
		for(int i = 0; i < 7 ; i++) 
		{
			scanf("%d %d", &a1, &a2);
			b[i] = a1 + a2;
		}
				
		for(int i = 0; i < 7 ; i++) 
		{
			if (b[i] > 8 && b[i] > b[key]) key = i;
		}
		if (key == -1) printf("0\n");
		else printf("%d\n", key+1);
	}
} 
