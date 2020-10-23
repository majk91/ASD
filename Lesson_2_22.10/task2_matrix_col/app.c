#include <stdio.h>

#define N 3 // i for row
#define M 2 // j for column


int main() {
    int array[N][M]; //3*2*4 = 24 bites

    for(int i = 0; i < N; i++){
        printf("\n");
        for(int j = M - 1; j >= 0; j--){ //!!!!!!
            array[i][j] = i + j;
            printf("%d\t", array[i][j]);
        }
    }

    for(int i = 0; i < N; i++){ //!!!!!!!!
        printf("\n");
        for(int j = M - 1; j >= 0; j--){
            printf("%p\t", (array + i*M + j));
        }
    }
    
    return 0;
}