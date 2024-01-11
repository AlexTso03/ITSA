#include <stdio.h>

int main (){
    int row, cul;

    while(scanf("%d %d", &row, &cul) != EOF) {
        int arr[100][100];

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < cul; j++) {
                scanf("%d", &arr[i][j]);
            }
        }

        //印出翻轉字串
        for(int i = 0; i < cul; i++) {
            for(int j = 0; j < row; j++) {
                printf("%d", arr[j][i]);

                if(j < row - 1) printf(" ");
            }

            printf("\n");
        }
    }

    return 0;
}