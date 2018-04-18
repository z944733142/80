#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	while(scanf("%d",&a)==1)
	{
		if(a==0) return 0;
		if(pow(a%10,3)+pow(a%100/10,3)+pow(a/100,3)==a) printf("Yes\n");
		else printf("No\n");
	 } 
	
 } 
