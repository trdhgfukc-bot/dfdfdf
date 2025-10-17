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
            if (i==0){
                a[i]=g[9];
            }
            else {
                a[i]=g[i-1];
            }
        }
        else{
            if (i==9){
                a[9]=g[0];
            }
            else{
                a[i]=g[i+1];
            }
        }   
    }
    for (int i = 0; i < 10; i++){
        printf("%.2f ", a[i]);
    }
    return 0;
    }
