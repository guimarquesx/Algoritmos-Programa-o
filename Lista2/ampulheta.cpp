#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, i, j, k=0;
	scanf("%i", &n);
	if (n % 2 != 0){
		for(i=n/2 + 1; i>1; i--){
	    	for(j=0; j<k; j++){
	        	putchar(' ');
	    	}
	    	for(j=1; j<=(2*i-1); j++){
	        	putchar('*');
	    	}
	    	putchar('\n');
	    	k += 1;
		}
		for(i=1; i<=n/2 + 1; i++){
	    	for(j=k; j>0; j--){
	        	putchar(' ');
	    	}
	    	for(j=1; j<=(2*i-1); j++){
	    		putchar('*');
	    	}
	    	putchar('\n');
			k -= 1;
		}
	}
	system ("PAUSE");
    return 0;

}
