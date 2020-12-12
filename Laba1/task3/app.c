#include <stdio.h>
#include <string.h>

#define MAX 256

int main() {
    int n, counter = 0;
    printf("Add size of array: \n");
    scanf("%d", &n);
    char str[n][MAX], str2[n][MAX];
    memset(str, 0, sizeof(str));
    memset(str2, 0, sizeof(str2));

    for (int i = 0; i < n; i++) {
        printf("Add element [%d] \n", i);
        scanf("%s", &str[i]);
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < MAX; ++j) {
            if (str[i][j] == '\0') {
                if (str[i][j - 2] == 'i' && str[i][j - 1] == 's' || str[i][j - 2] == 'e' && str[i][j - 1] == 'r') {
                    str[i][0] = '\0';
                    break;
                }
            }
        }
    }


    for (int l = 0; l < n; ++l) {
        if (str[l][0] != '\0') strcpy(str2[counter], str[l]), counter++;
    }
    printf("\nPrint new word list \n");
    for (int k = 0; k < counter; ++k) {
        printf("%s\n", str2[k]);
    }
    return 0;
}
