#include <stdio.h>

int main(){
    int miles;
    double kilos;

    while(scanf("%d", &miles) != EOF) {
        kilos = miles * 1.6;

        printf("%.1lf\n", kilos);
    }

    return 0;
}