#include <stdio.h>
#include <string.h>

#define M 10
#define N 20

void print (char[]);


int main() {
    char dest[N], src[M];

    gets(dest);
    gets(src);
    
    strcat(dest, src);

    printf("Length of array %d\n\n", strlen(dest) );

    print(dest);
    
    return 0;
}

void print (char a[]){
    for(int index = 0 ; index < strlen(a); index++){
        printf("a [%d] = %c \n", index, a[index] );
    }
}
