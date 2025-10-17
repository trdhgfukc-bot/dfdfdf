#include <stdio.h>
int main(int argc, char** argv) {
    float a[10],g[10];
    for (int i = 0; i<10;i++){
        scanf("%f",&g[i]);
    }
    int k;
    scanf("%d", &k);
    for (int i = 0; i < 10; ++i){
        if (k>0){
            if(i-k>-1){
            a[i]=g[i-k];
            }
            else {
                a[i]=g[10-k+i];
            }
        
        }
        else{
            if (i+k>-1){
                a[i]=g[i+k];
            }
            else{
                a[i]=g[10+k+i];
            }
        }
    }
    for (int i = 0; i < 10; i++){
        printf("%.2f ", a[i]);
    }
    return 0;
    }
