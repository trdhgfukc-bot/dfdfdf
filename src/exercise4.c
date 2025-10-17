#include <stdio.h>

int main(int argc, char** argv) {
    float a[10],g[10];
    int k;
    float x;
    for (int i = 0; i < 10; ++i){
        scanf("%f", &g[i]);  
    }
    scanf("%f", &x);
    scanf("%d", &k);
    for (int i = 0; i < 10; ++i){
        if (i<k){
            a[i]=g[i];
        }
        else if (i==k){
            a[i]=x;
        }
        else if (i>k){
            a[i]=g[i-1];
        }
        }

   
    for (int i = 0; i<10; ++i){
        printf(" %f", a[i]);
    }
    return 0;
}