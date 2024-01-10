#include <stdio.h>

int main() {
    int n;

    while(scanf("%d", &n) != EOF) {
        int sum = 0;

        n = n / 3;

        for(int i = 1; i <= n; i++) {
            sum += i;
        }

        sum *= 3;

        printf("%d\n", sum);
    }

    return 0;
}