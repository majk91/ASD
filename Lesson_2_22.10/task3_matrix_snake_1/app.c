#include <stdio.h>

#define N 3 // i for row
#define M 4 // j for column


int main() {
    int array[N][M]; //3*2*4 = 24 bites
    int k = 1;
    for(int j = M - 1; j >= 0; j--){
        if((M-1) % 2 == j % 2){
            for(int i = N - 1; i >= 0; i--){
                array[i][j] = k++;
            }
        }else{
            for(int i = 0; i < N; i++){
                array[i][j] = k++;
            }
        }
    }

    /*
      10  9  4  3    
      11  8  5  2
      12  7  6  1
    */

    for(int j = M - 1; j >= 0; j--){
        printf("\n");
        for(int i = N - 1; i >= 0; i--){
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