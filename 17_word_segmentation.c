#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[1010];
    char word_token[1000][1000], *tmp;
    int tokencnt = 0;

    fgets(input, 1010, stdin);

    //全部轉小寫
    for(int i = 0; i < strlen(input); i++) {
        input[i] = tolower(input[i]);
    }

    //先做一次字串切割(不知道為什麼要加\r ^_^)
    tmp = strtok(input, " \n\r");

    while(tmp != NULL) {
        int is_same = 0;

        //比較是否在要輸出的字串庫裡面
        for(int i = 0; i < tokencnt; i++) {
            if(!strcmp(tmp, word_token[i])) {
                is_same = 1;

                break;
            }
        }

        //沒有的話，放入
        if(!is_same) {
            strcpy(word_token[tokencnt], tmp);

            tokencnt++;
        }

        tmp = strtok(NULL, " \n\r");
    }

    //輸出
    for(int i = 0; i < tokencnt; i++) {
        printf("%s", word_token[i]);

        if(i < tokencnt - 1) printf(" ");
    }

    printf("\n");

    return 0;
}