#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char a;
    char s1[10000];
    
    char s2[10000];


    scanf("%c",&a);
    scanf("%s\n",&s1);
    scanf("%[^\n]%*c", &s2);


    printf("%c",a);
    printf("\n");

    printf(s1);
    printf("\n");

    printf(s2);
    printf("\n");

    return 0;
}

