#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[110];
    int wrd_cnt = 1, let_tab[26] = {0};

    fgets(input, 110, stdin);

    for(int i = 0; i < strlen(input); i++) {
        //有空白表示右邊會有單字
        if(input[i] == ' ') wrd_cnt++;

        //若為字母
        if(isalpha(input[i])) {
            //轉小寫
            input[i] = tolower(input[i]);

            //放進陣列中
            let_tab[input[i] - 'a']++;
        }
    }

    //輸出
    printf("%d\n", wrd_cnt);
    
    for(int i = 0; i < 26; i++) {
        if(let_tab[i] != 0) {
            printf("%c : %d\n", 'a' + i, let_tab[i]);
        }
    }

    return 0;
}