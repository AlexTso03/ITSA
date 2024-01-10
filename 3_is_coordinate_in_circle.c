#include <stdio.h>
#include <math.h>

int main() {
    int x, y;

    while(scanf("%d %d", &x, &y) != EOF) {
        int dis = pow(x, 2) + pow(y, 2);

        if(dis <= 10000) printf("inside\n");
        else printf("outside\n");
    }
    
    return 0;
}