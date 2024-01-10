#include <stdio.h>

int main () {
    float n[10];

    for(int i = 0; i < 10; i++) {
        scanf("%f", &n[i]);
    }

    float max = n[0], min = n[0];

    for(int i = 0; i < 10; i++) {
        if(max < n[i]) max = n[i];
        
        if(min > n[i]) min = n[i];
    }

    printf("maximum:%.2f\n", max);
    printf("minimum:%.2f\n", min);

    return 0;
}