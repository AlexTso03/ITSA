#include <stdio.h>
#include <string.h>

int main() {
    char str1[138], str2[522], *find_ptr = str2;
    int cnt = 0;

    scanf("%s", str1);
    //%s前面要加空格
    scanf(" %s", str2);

    do {
        //找子字串
        find_ptr = strstr(find_ptr, str1);

        if(find_ptr != NULL) {
            //總數+1
            cnt++;

            //指標指到找到的子字串的下一個字元
            find_ptr++;
        }

    }while(find_ptr != NULL);

    printf("%d\n", cnt);

    return 0;
}