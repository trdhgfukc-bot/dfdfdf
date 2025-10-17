#include <stdio.h>
int main(int argc, char** argv) {
    float m[10],g[10];
    for (int i = 0; i<10;i++){
        scanf("%f",&g[i]);
    }
    int k;
    scanf("%d", &k);
    for (int i = 0; i<10; i++){
        if (k>0){
            m[i]=g[(i+9)%10];
        }
    else{
        m[i]=g[(i+1)%10];
    }
    for (int i = 0; i < 10; i++){
        printf("%.1f", m[i]);
    }
    }
    return 0;
}