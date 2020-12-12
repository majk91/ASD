#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int summTriangle (int n);

int main() {

	int n, i=0, j=0;//this is size of matrix
	int topTriangleArraySize;//list value from top triangle

	printf("Add size of matrix (int n): \n");
	scanf("%d", &n);

	topTriangleArraySize = summTriangle(n);//get size of top triangle
	int arrayInput[topTriangleArraySize], matrixResult[n][n]; //create matrix and inputArray

	srand(time(NULL));

	printf("Input value: \n");
    for(int k = 0 ; k < topTriangleArraySize; k++){
        arrayInput[k] = rand() % 10;
        printf("%d ", arrayInput[k]);
    }
	printf("\n");  

    for (int k = 0; k < topTriangleArraySize; k++){

    	//printf("k=%d = %d; i=%d; j=%d\n", k, arrayInput[k], i, j );
    	matrixResult[i][j] = arrayInput[k];
    	
    	if( i!=j ) matrixResult[j][i] = arrayInput[k];
    	
    	j++;

    	if( j>(n-1) ) {
    		i++;
    		j=i;
    	}
    }

    printf("\nOutput value:");
    for(int i = 0 ; i < n; i++){
        printf("\n");
        for(int j = 0 ; j < n; j++)
            printf("%4d", matrixResult[i][j] );
    }

	return 0;
}

int summTriangle (int n){
  return (n < 2) ? 1 : n + summTriangle (n - 1);
}
