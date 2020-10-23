#include <stdio.h>
#include <string.h>

#define N 10

void print (char[]);

int main() {
    char array[N]; //0,1,2,3,4,5,6,7,8 (last char - [0000 0000] finish marker)
    //ASCII - first 128 chars for all charset

    gets(array); // read line from input-line

    printf("Length of array %d\n", strlen(array) );

    print(array);
    

    return 0;
}

void print (char a[]){
    for(int index = 0 ; index < strlen(a); index++){
        printf("a [%d] = %c \n", index, a[index] );
    }
}