#include <stdio.h>

int main () {
    float n[10];

    for(int i = 0; i < 10; i++) {
        scanf("%f", &n[i]);
    }

    float max = n[0], min = n[0];

    for(int i = 0; i < 10; i++) {
        //紀錄最大值
        if(max < n[i]) max = n[i];
        
        //紀錄最小值
        if(min > n[i]) min = n[i];
    }

    printf("maximum:%.2f\n", max);
    printf("minimum:%.2f\n", min);

    return 0;
}