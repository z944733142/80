#include<stdio.h> 
#include<string.h>
int main () {
	char c[1005] , d[1005];
	int c1, c2; 
	while (1)
	{
		scanf("%s %s", c, d);
		if(c[0] == '0' && d[0] == '0') break; 
		c1 = 0;
		c2 = 0;
		if(c[0] == '-') c1 = 1;
		if(d[0] == '-') c2 = 1;
		if (c1 == 1 && c2 != 1) 
		{
			printf("a<b\n");
			continue;
		}
		if (c1 != 1 && c2 == 1) 
		{
			printf("a>b\n");
			continue ;
		}
		if (c1 == 0 && c2 == 0) { 
		if (strlen(c) > strlen(d)) 
		{
			printf("a>b\n");
				continue ; 
		} 
		if (strlen(c) < strlen(d) )
		{
		 	printf("a<b\n");
			 continue ; 
		} 
		if (strcmp(c,d) == 0 && strlen(c) == strlen(d)) 
		{
			printf("a==b\n");
			continue ; 
		} 
		if (strlen(c) == strlen(d) && strcmp(c,d) > 0 ) 
		{
			printf("a>b\n");continue ; 
		} 
		if (strlen(c) == strlen(d) && strcmp(c,d) < 0 ) 
		{
			printf("a<b\n");continue ; 
		} 

		} 
		if (c1 == 1 && c2 == 1) { 
		if (strcmp(c,d) == 0) 
		{
			printf("a==b\n");
			continue ; 
		} 
		else if (strlen(c) == strlen(d) && strcmp(c,d) > 0 ) 
		{
			printf("a<b\n");continue ; 
		} 
		else if (strlen(c) == strlen(d) && strcmp(c,d) < 0 ) 
		{
			printf("a>b\n");continue ; 
		} 
		else if (strlen(c) > strlen(d)) 
		{
			printf("a<b\n");	continue ; 
		} 
		else if (strlen(c) < strlen(d))
		{
		 	printf("a>b\n");continue ; 
		} 
		} 
	}
}
