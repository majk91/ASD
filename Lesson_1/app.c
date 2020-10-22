#include <assert.h>
#include <stdio.h>

#include "euclid.h"


int main() {
	int actual = gcd(6, 3);
    assert(actual == 3);
    printf("gcd(6,3)= %d \n", actual);

    actual = gcd(54, 24);
    assert(actual == 6);
    printf("gcd(54,24)= %d \n", actual);

    actual = gcd(25, 100);
    assert(actual == 25);
    printf("gcd(24,24)= %d \n", actual);

    actual = gcd(27, 25);
    assert(actual == 1);
    printf("gcd(27,25)= %d \n", actual);

    actual = gcd(25, 27);
    assert(actual == 1);
    printf("gcd(25,27)= %d \n", actual);

    actual = gcd(12, 18);
    assert(actual == 6);
    printf("gcd(12, 18)= %d \n", actual);
}
