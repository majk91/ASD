#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7 // i = j

void init(int[N][N]);
void print(int[N][N]);
int findMaxIndexMainDiagonale(int[N][N]);
int findMinIndexSecondDiagonale(int[N][N]);
void swap(int, int, int[N][N]);


int main() {
    int matrix[N][N];
    init(matrix);
    print(matrix);

    swap(
        findMaxIndexMainDiagonale(matrix),
        findMinIndexSecondDiagonale(matrix),
        matrix
    );

    print(matrix);

    return 0;
}

void init(int a[N][N]){
    srand(time(NULL));
    for(int i = 0 ; i < N; i++){
        for(int j = 0 ; j < N; j++)
            a[i][j] = rand() % 100;
    }
}

void print(int a[N][N]){
    printf("\n");
    for(int i = 0 ; i < N; i++){
        printf("\n");
        for(int j = 0 ; j < N; j++)
            printf("%4d", a[i][j] );
        
    }
}

int findMaxIndexMainDiagonale(int a[N][N]){
    int maxIndex = 0;
    for(int i = 1 ; i < N; i++){
        if(a[maxIndex][maxIndex]< a[i][i])
            maxIndex = i;
    }
    return maxIndex;
}

int findMinIndexSecondDiagonale(int a[N][N]){
    int minIndex = 0;
    for(int i = 1 ; i < N; i++){
        if(a[minIndex][N - 1 - minIndex] > a[i][N - 1 - i])
            minIndex = i;
    }
    return minIndex;
}

void swap(int maxIndex, int minIndex, int a[N][N]){
    int temp = a[maxIndex][maxIndex];
    a[maxIndex][maxIndex] = a[minIndex][N - 1 - minIndex];
    a[minIndex][N - 1 - minIndex] = temp;

    //var 2, my)
    //a[maxIndex][maxIndex] += a[minIndex][N - 1 - minIndex];
    //a[minIndex][N - 1 - minIndex] = a[maxIndex][maxIndex]-a[minIndex][N - 1 - minIndex];
    //a[minIndex][minIndex] = a[maxIndex][maxIndex] - a[minIndex][N - 1 - minIndex];
}