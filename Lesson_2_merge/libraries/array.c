int isEqual(int rightArray[], int leftArray[], int n){
    for (int i = 0; i <n; i++){
        if(rightArray[i] != leftArray[i]) return 0;
    }
    return 1;
}

void print(char msg[],  int array[] , int n){
    printf("%s\n", msg);
    for (int i = 0; i < n; ++i){
        printf("%d\t", array[i]);
    }
    printf("\n");
}

void merge(int aArray[], int lengthA, int bArray[], int lengthB, int cArray[]){
    int indexA;
    int indexB;

    indexA = 0;
    indexB = 0;

    for (int indexC = 0; indexC < lengthA + lengthB; ++indexC)
    {
        /* 1 : */
        if(indexA >= lengthA){
            cArray[indexC] = bArray[indexB++];
        }else{
            /* 2: */
            if(indexB >= lengthB){
                cArray[indexC]= aArray[indexA++];
            }else{
                /*3:*/
                if(aArray[indexA] < bArray[indexB]){
                    cArray[indexC]= aArray[indexA++];
                }else{
                    cArray[indexC]= bArray[indexB++];
                }
            }
        }
    }

};
/*void shiftLeft(int a[N], int n, int k){
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
}*/