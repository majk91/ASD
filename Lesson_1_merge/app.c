#include <assert.h>
#include <stdio.h>

#include "libraries/array.h"

#define N 5
#define M 7
#define SIZE() M+N


int main() {
    int A[N] = {11, 17, 23, 42, 83};
    int B[M] = {1, 5, 12, 19, 67, 99, 103};
	int C[SIZE()];
    int expected[SIZE()]= {1, 5, 11, 12, 17, 19, 23, 42, 67, 83, 99, 103 };
    int k = 14;

    print("Array A : ", A, N);
    print("Array B : ", B, M);

    merge(A, N, B, M, C);

    print("Array C : ", C, SIZE());
    print("expected array : ", expected, SIZE());

    assert(isEqual(C, expected, SIZE()));

    return 0;
}


