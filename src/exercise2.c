#include <stdio.h>

int main(int argc, char** argv) {
    float a[10];
    for ( int i = 0; i<10; ++i){
        scanf("%f", &a[i]);

    }
    int size =sizeof(a)/sizeof(a[0]);
    for (int i = size-1; i>-1; --i){
        printf(" %f", a[i]);
    }
    return 0;
}