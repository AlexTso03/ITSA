#include <stdio.h>

int main() {
    //建立顯示字串
    char num[5][10][10] = {
        {"*****", "    *", "*****", "*****", "*   *", "*****", "*****", "*****", "*****", "*****"}, 
        {"*   *", "    *", "    *", "    *", "*   *", "*    ", "*    ", "    *", "*   *", "*   *"},
        {"*   *", "    *", "*****", "*****", "*****", "*****", "*****", "    *", "*****", "*****"},
        {"*   *", "    *", "*    ", "    *", "    *", "    *", "*   *", "    *", "*   *", "    *"},
        {"*****", "    *", "*****", "*****", "    *", "*****", "*****", "    *", "*****", "    *"},
    };

    char input[4];

    scanf("%s", input);

    //由上往下印
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            int idx = input[j] - '0';

            //找到要印的數字
            printf("%s", num[i][idx]);

            if(j < 3) printf(" ");
        }
        printf("\n");
    }

    return 0;
}