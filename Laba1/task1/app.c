#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 25

void init(int[N]);
void print(int[N]);
void printFromTo(int[N], int, int);

int main() {

	int X[N];

	int k=0; //search array lang
	int lastItemIndex=0; //last search success index
	int ktemp=0; //last success size

	init(X); // create random integaaar list

	print(X);

	//перебераю все цифры
	for(int p = 1 ; p < N; p++){
		//если парное и предыдущее > или не парное и предідущее <
		//printf(" para - %d,  X[p] = %d, X[p-1] = %d \n", p%2, X[p], X[p-1] );
		if( (p%2 == 1 && X[p] > X[p-1] ) ||
			(p%2 == 0 && X[p] < X[p-1] )
		){
			// добавляю счетсик удачного поиска
			//printf("Success\n");
			ktemp++;
			if(ktemp > k){
				//если текущий счетчик удачного поиска > общему то  сохраняю индекс
				//и сохраняю текущую длинну как самую большую
				k = ktemp;
				lastItemIndex = p;
			}
		}else{
			//скидіваю текущий счетчик совпадений условий
			ktemp = 0;
		}
	}

	//printf("lastItemIndex - %d,  k = %d \n", lastItemIndex, k );

	printFromToLastIndex(X, lastItemIndex, k );

	return 0;
}

void init(int a[N]){
    srand(time(NULL));
    for(int i = 0 ; i < N; i++){
            a[i] = rand() % 100;
    }
}

void print(int a[N]){
    printf("\n");
    for(int i = 0 ; i < N; i++){
        printf("%4d", a[i] );
    }
    printf("\n");
}

void printFromToLastIndex(int a[N], int lastIndex, int length){
	printf("\n");
	for(int i = lastIndex - length; i <= lastIndex; i++){
        printf("%4d", a[i] );
    }
    printf("\n");
};
