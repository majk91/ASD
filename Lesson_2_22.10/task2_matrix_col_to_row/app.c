#include <stdio.h>

#define N 3 // i for row
#define M 2 // j for column


int main() {
    int array[N][M]; //3*2*4 = 24 bites

    for(int j = M - 1; j >= 0; j--){//!!!!!!!!!!!!!! col
        printf("\n");
        for(int i = N - 1; i >= 0; i--){ //!!!!!! row
            array[i][j] = i + j;
            printf("%d\t", array[i][j]);
        }
    }

    for(int j = M - 1; j >= 0; j--){ //!!!!!!!! col
        printf("\n");
        for(int i = N - 1; i >= 0; i--){ //!!!!!!!!!!!!! row
            printf("%p\t", &(array[i][j]));
        }
    }

    //show real matrix
    for(int i = 0; i < N; i++){
        printf("\n");
        for(int j = 0; j < M; j++){
            printf("%d\t", array[i][j]);
        }
    }
    
    return 0;
}