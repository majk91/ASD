#include <stdio.h>
#include <string.h>

//#include "libraries/array.h"

#define N 10
//#define M 7
//#define SIZE() M+N

void print (char[]);


int main() {
    char dest[20], src[N]; // langth = N-1. останній символ - говорить про закінчення "0000 0000"

    //ASCII

    gets(dest);
    gets(src);

    strcat(dest, src);

    printf("Length of array %d\n", strlen(dest) );

    print(dest);
    

    return 0;
}

void print (char a[]){
    for(int index = 0 ; index < strlen(a); index++){
        printf("a [%d] = %c \n", index, a[index] );
    }
}
