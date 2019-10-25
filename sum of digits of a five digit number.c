#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,a,sum=0,l,i;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    

    while(n){
          a =  n%10;
          n = n/10;
        sum = sum + a;
    }
    printf("%d",sum);
    return 0;
}

