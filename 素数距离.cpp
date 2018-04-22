#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,e;
	scanf("%d",&a);
	while(a--)
	{
		scanf("%d",&b);
		for(int i=0;1;i++)
		{
			if(b==1) {
			printf("2 1\n");
			break ;
		}
			e=0;
			for(int j=2;j<=sqrt(b-i);j++)
			{
				if((b-i)%j==0) 
				{
				    e=1;
					break;	
				}
			}
			if(e==0) 
			{
				printf("%d %d\n",b-i,i);
				break;
			}
			e=0;
				for(int j=2;j<=sqrt(b+i);j++)
			{
				if((b+i)%j==0) 
				{
				    e=1;
					break;	
				}
			}
			if(e==0) 
			{
				printf("%d %d\n",b+i,i);
				break;
			}
		}
	}
}
