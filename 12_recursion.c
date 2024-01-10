#include <stdio.h>

int recursive_func(int n) {
    if(n == 0 || n == 1) {
        return (n + 1);
    }

    return recursive_func(n - 1) + recursive_func(n / 2);
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d\n", recursive_func(n));
}