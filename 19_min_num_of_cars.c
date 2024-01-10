#include <stdio.h>

int main() {
    int n, car_num = 0, time[25] = {0};

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int s, d;

        scanf("%d %d", &s, &d);

        for(int j = s; j < d; j++) {
            time[j]++;
        }
    }

    for(int i = 0; i < 25; i++) {
        if(time[i] > car_num) car_num = time[i];  
    }

    printf("%d\n", car_num);

    return 0;
}