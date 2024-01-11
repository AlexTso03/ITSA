#include <stdio.h>

int main() {
    int n;
    char operator;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int a1, a2, b1, b2;

        //%c前面要加空格
        scanf(" %c %d %d %d %d", &operator, &a1, &a2, &b1, &b2);

        //運算(除法有點麻煩就不寫了ㄏ)
        switch(operator) {
            case '+':
                printf("%d %d\n", a1 + b1, a2 + b2);
                break;

            case '-':
                printf("%d %d\n", a1 - b1, a2 - b2);
                break;

            case '*':
                printf("%d %d\n", a1 * b1 - a2 * b2, a2 * b1 + a1 * b2);
                break;

            default:
                break;
        }
    }

    return 0;
}