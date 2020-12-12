#include <stdio.h>

#define N 4 // i for row
#define M 3 // j for column


int main() {
    int array[N][M]; //3*2*4 = 24 bites

    for(int i = 0; i < N; i++){
        printf("\n");
        for(int j = 0; j < M; j++){ //!!!!!!
            array[i][j] = i + j;
            printf("%d\t", array[i][j]);
        }
    }

    printf("\n");
     for(int i = 0; i < N; i++){
        printf("\n");
        for(int j = 0; j < M; j++){ //!!!!!!

            //printf("%p\t", (int*)array);
            printf("%p\t", (int*)array+(i*M)+j);
        }
    }

    printf("%d\t", sizeof(array));

    return 0;
}