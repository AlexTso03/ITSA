#include <stdio.h>

//輾轉相除法
int gcd(int a, int b) {
    if(a % b == 0) {
        return b;
    }

    return gcd(b, a % b);
}

int main() {
    int a, b, tmp;

    scanf("%d %d", &a, &b);

    if(a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    printf("%d\n", gcd(a, b));
}