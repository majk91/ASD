#include <stdio.h>
#include <string.h>

#define N 2

void print(int[2*N][2*N]);
//void printFromTo(int[N], int, int);

int main() {

	int matrix[2*N][2*N], m1[N][N], m2[N][N], m3[N][N], m4[N][N], i, j, k, m ;

	
	for (int i = 0; i < 2*N; ++i) {
		for (int j = 0; j < 2*N; ++j) {
			printf("Input value for matrix[%d][%d]: \n", i, j );
        	scanf("%d", &matrix[i][j]);
		}
    }

    print(matrix);

    //create blocks m1-m4
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            m1[i][j]=matrix[i][j];
 
    for(i=0;i<N;i++)
        for(j=N,m=0;j<2*N;j++,m++)
            m2[i][m]=matrix[i][j];
 
    for(i=N,k=0;i<2*N;i++,k++)
        for(j=N,m=0;j<2*N;j++,m++)
            m3[k][m]=matrix[i][j];
 
    for(i=N,k=0;i<2*N;i++,k++)
        for(j=0;j<N;j++)
            m4[k][j]=matrix[i][j];

    //build new matrix from m4-m1-m2-m3
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            matrix[i][j]=m4[i][j];
    for(i=0;i<N;i++)
        for(j=N,k=0;j<2*N;j++,k++)
            matrix[i][j]=m1[i][k];
 
    for(i=N,k=0;i<2*N;i++,k++)
        for(j=N,m=0;j<2*N;j++,m++)
            matrix[i][j]=m2[k][m];
 
    for(i=N,k=0;i<2*N;i++,k++)
        for(j=0;j<N;j++)
            matrix[i][j]=m3[k][j];

	printf("\nNew array");
	print(matrix);

	return 0;
}


void print(int a[2*N][2*N]){
    printf("\n");
    for(int i = 0 ; i < 2*N; i++){
        printf("\n");
        for(int j = 0 ; j < 2*N; j++)
            printf("%4d", a[i][j] );
        
    }
    printf("\n");
}