#include <stdio.h>
#include <string.h>

int main() {
    char n[1000];

    while(scanf("%s", n) != EOF) {
        int ispalin = 1;

        for(int i = 0, j = strlen(n) - 1; i <= strlen(n) / 2 && j >= strlen(n) / 2; i++, j--) {
            if(n[i] != n[j]) {
                ispalin = 0;

                break;
            }
        }

        if(ispalin) printf("YES\n");
        else printf("NO\n");

        memset(n, 0, strlen(n));
    }

    return 0;
}