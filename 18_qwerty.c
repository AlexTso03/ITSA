#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    //建立鍵盤
    char *table = "!@#$%^&*()_++`1234567890-=={}||qwertyuiop[]\\\\:\"\"asdfghjkl;''<>??zxcvbnm,.//";
    char input[1000];

    fgets(input, 1000, stdin);

    //轉小寫
    for(int i = 0; i < strlen(input) - 1; i++) {
        input[i] = tolower(input[i]);
    }

    //若空白，就輸出空白：若是其他，便在鍵盤上往右移一個字元
    for(int i = 0; i < strlen(input) - 1; i++) {
        for(int j = 0; j < strlen(table) - 1; j++) {
                if(input[i] == ' ') break;

                if(input[i] == table[j]) {
                    input[i] = table[j + 1];

                    break;
                }
        }
    }

    //輸出
    for(int i = 0; i < strlen(input) - 1; i++) {
        printf("%c", input[i]);
    }
    printf("\n");

    return 0;
}