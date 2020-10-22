#include <assert.h>
#include <stdio.h>

#define N 10

int isEqual(int[N], int[N], int);
void print(int[N], int);
void shiftLeft(int[N], int, int);


int main() {
	int array[N] = {0,1,2,3,4,5,6,7,8,9};
    int expectedArray[N]= {4,5,6,7,8,9,0,1,2,3,};
    int k = 14;

    print(array, N);
    shiftLeft(array, N, k);
    print(array, N);

    assert(isEqual(array, expectedArray, N) == 1);

    return 0;
}


int isEqual(int right[N], int left[N], int n){
    for (int i = 0; i <n; i++){
        if(right[i] != left[i]) return 0;
    }

    return 1;
}
void print(int a[N] , int n){
    for (int i = 0; i<n; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
}
void shiftLeft(int a[N], int n, int k){
    k = k%n;
    int b[n];

    for (int i = 0; i <n; i++){
        b[i]=a[i];
    }

    for (int i = k; i < n; i++){
        a[i - k] = a[i];
    }

    for (int i = 0; i < k; i++){
        a[n - k + i] = b[i];
    }
}