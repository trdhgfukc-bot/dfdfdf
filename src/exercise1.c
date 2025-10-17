#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    double sum=0.0,num;
    for (int i = 0; i < 10; i++){
        scanf("%lf", &num);
        sum+=num;
    }
    printf("%.2f\n", sum /10);
    return 0;
}
