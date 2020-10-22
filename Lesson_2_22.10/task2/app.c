#include <stdio.h>
//#include <string.h>

//#include "libraries/array.h"

#define N 3 // i for row
#define M 2 // j for column
//#define SIZE() M+N

//void print (char[]);


int main() {
    int array[N][M]; //3*2*4 = 24 bites

// 0 0 1 1 2 2

// 0 0
// 1 1
// 2 2

    for(int i = 0; i < N; i++){
        printf("\n");
        for(int j = 0; j < M; j++){
            array[i][j] = i+j;
            printf("%d\t", array[i][j] );
        }
    }

    for(int i = 0; i < N; i++){
        printf("\n");
        for(int j = 0; j < M; j++){
            array[i][j] = i+j;
            printf("%d\t", (array + i*M + j ));
        }
    }
    

    return 0;
}

/*void print (char a[]){
    for(int index = 0 ; index < strlen(a); index++){
        printf("a [%d] = %c \n", index, a[index] );
    }
}*/
