#include <stdio.h>

int main() {
    int n, bin[10];

    scanf("%d", &n);
    
    //負數要推至正整數
    if(n < 0) n += 256;

    //從bin的最後一格開始放入
    for(int i = 7; i >= 0; i--) {
        bin[i] = n % 2;

        n /= 2;
    }

    for(int i = 0; i < 8; i++) {
        printf("%d", bin[i]);
    }
    printf("\n");

    return 0;
}