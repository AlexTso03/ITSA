#include <stdio.h>

int arr[3][3];

void is_win() {
    //橫排一直線
    for(int i = 0; i < 3; i++) {
        if(arr[i][0] == 0 && arr[i][1] == 0 && arr[i][2] == 0) {
            printf("True\n");

            return ;
        }

        if(arr[i][0] == 1 && arr[i][1] == 1 && arr[i][2] == 1) {
            printf("True\n");

            return ;
        }
    }

    //直排一直線
    for(int i = 0; i < 3; i++) {
        if(arr[0][i] == 0 && arr[1][i] == 0 && arr[2][i] == 0) {
            printf("True\n");

            return ;
        }

        if(arr[0][i] == 1 && arr[1][i] == 1 && arr[2][i] == 1) {
            printf("True\n");

            return ;
        }
    }

    //斜的一直線
    if(arr[0][0] == 0 && arr[1][1] == 0 && arr[2][2] == 0) {
        printf("True\n");

        return;
    }
    if(arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 1) {
        printf("True\n");

        return;
    }
    if(arr[2][0] == 0 && arr[1][1] == 0 && arr[0][2] == 0) {
        printf("True\n");

        return;
    }
    if(arr[2][0] == 1 && arr[1][1] == 1 && arr[0][2] == 1) {
        printf("True\n");

        return;
    }
    

    printf("False\n");

    return;
}

int main() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    is_win();

    return 0;
}