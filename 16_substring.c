#include <stdio.h>
#include <string.h>

int main() {
    char str1[138], str2[522], *find;
    int cnt = 0;

    scanf("%s", str1);
    //%s前面要加空格
    scanf(" %s", str2);

    //先找第一次子字串
    find = strstr(str2, str1);

    //若有找到
    while(find != NULL) {
        //總數+1
        cnt++;

        //往找到的右邊第一個字元接續下去找
        find++;

        find = strstr(find, str1);
    }

    printf("%d\n", cnt);

    return 0;
}