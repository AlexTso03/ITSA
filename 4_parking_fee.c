#include <stdio.h>

int main() {
    int hr1, min1, hr2, min2;

    while(scanf("%d %d %d %d", &hr1, &min1, &hr2, &min2) != EOF) {
        int time, fee = 0, iszero = 0;

        if(min2 < min1) {
            hr2 -= 1;

            min2 += 60;
        }

        time = (hr2 - hr1) * 60 + (min2 - min1);

        for(int i = 0; i < 4; i++) {
            time -= 30;

            if(time < 0) {
                iszero = 1;
                break;
            }

            fee += 30;
        }

        if(!iszero) {
            for(int i = 0; i < 4; i++) {
                time -= 30;

                if(time < 0) {
                    iszero = 1;
                    break;
                }

                fee += 40;
            }
        }

        if(!iszero) {
            while(1) {
                time -= 30;

                if(time < 0) break;

                fee += 60;
            }
        }

        printf("%d\n", fee);
    }

    return 0;
}