#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char *input1 = malloc(1024*sizeof(char));
    scanf("%s" , input1);
    input1 = realloc(input1, strlen(input1)+1);

    for(int j=0;j<10;j++){
        int count =0;

        for(int i=0;i < strlen(input1);i++){
            if(input1[i]-48 == j)
            count++;

        }
        printf("%d ",count);
        
            }



    return 0;
}
