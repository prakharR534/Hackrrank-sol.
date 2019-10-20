#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    
    scanf("%[^\n]%*c", s);
    //scan the whole line 
    for(int i=0;i<strlen(s);i++){

        if(s[i] == ' '){
            printf("\n");
        }
        //seprate the string by ' '
        // " " and ' ' are different
        else {
            printf("%c",s[i]);
        }
    }
    
    return 0;
}
