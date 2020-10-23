#include <stdio.h>

#define N 3 // i for row
#define M 2 // j for column


int main() {
    int array[N][M]; //3*2*4 = 24 bites

    // 0 0 1 1 2 2  - save inside memory

    // 0 0
    // 1 1
    // 2 2

    for(int i = 0; i < N; i++){
        printf("\n");
        for(int j = 0; j < M; j++){
            array[i][j] = i + j;
            printf("%d\t", array[i][j]);
        }
    }
    printf("\nArray pointer %p\n", array);
    for(int i = 0; i < N; i++){
        printf("\n");
        for(int j = 0; j < M; j++){
            printf("%p\t", &(array[i][j]));
        }
    }
    
    return 0;
}