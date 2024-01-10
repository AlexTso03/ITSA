#include <stdio.h>

int main() {
    int month;

    while(scanf("%d", &month) != EOF) {
        if(month >= 3 && month <= 5) printf("Spring\n");
        else if(month >= 6 && month <= 8) printf("Summer\n");
        else if(month >= 9 && month <= 11) printf("Autumn\n");
        else if(month == 1 || month == 2 || month == 12) printf("Winter\n");
    }

    return 0;

}