#include<stdio.h>
#include<stdlib.h>
int main() {
	int a,b,i,t,g,d,j,m;
	char c[5];
	scanf("%d", &a);
	while (a--) {
		scanf("%d", &b);
		for(i = 0; b != 6174; i++) {
		itoa(b, c, 10);
	    for(j = 0; j < 4; j++) {
	    	for(m = 0; m <= 2; m++) {
	    		if(c[m] > c[m+1]) {
	    			t = c[m];
	    			c[m] = c[m+1];
	    			c[m+1] = t;
				}
			}
		}
		g = atoi(c);
	    for(j = 0; j < 4; j++) {
	    	for(m = 0; m <= 2; m++) {
	    		if(c[m] < c[m+1]) {
	    			t = c[m];
	    			c[m] = c[m+1];
	    			c[m+1] = t;
				}
			}
		}
	    d = atoi(c);
	    b = d - g;
		
	}
	printf("%d", i+1);
	
} 
}
