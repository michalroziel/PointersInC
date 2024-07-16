#include <stdio.h>



void printArray(int a[]) {


    for ( int i = 0; i < sizeof(a)/sizeof(a[0]); i++ ) {

        printf("a[%d] = %d\n", i, a[i]);
    }

}

int main(void) {
    printf("Hello, World!\n");

    int a[] = {20, 21, 22, 24, 25};

    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {

    printf("a[%d] = %d\n", i, a[i]);

    }

    printArray(a);
    return 0;
}

