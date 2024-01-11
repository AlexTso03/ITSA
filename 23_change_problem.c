#include <stdio.h>

int main() {
    int n, a1, a2, a3, cost, c1 = 0, c5 = 0, c50 = 0;

    scanf("%d,%d,%d,%d", &n, &a1, &a2, &a3);

    cost = a1 * 15 + a2 * 20 + a3 * 30;

    //若能找得出錢
    if(cost <= n) {
        n -= cost;

        c50 = n / 50;

        c5 = n % 50 / 5;
        
        c1 = n % 50 % 5;

        printf("%d,%d,%d\n", c1, c5, c50);
    }
    else {
        //若找不出錢
        printf("0\n");
    }

    return 0;

}