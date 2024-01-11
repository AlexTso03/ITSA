#include <stdio.h>

int main() {
    long double r, sum = 0.0;
    long long int n, p;

    //％Lf
    scanf("%Lf %lld %lld", &r, &n, &p);

    //計算複利
    while(n) {
        sum += p;

        sum *= (1.0 + r);

        n--;
    }

    printf("%lld\n", (long long int)sum);

    return 0;
}