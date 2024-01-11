#include <stdio.h>

int main(){
    int num;

    while(scanf("%d", &num) != EOF) {
        int isprime = 1;
        
        //從2找到該數除以2，若都沒有該數的因數，判定為質數
        for(int i = 2; i <= num / 2; i++) {
            if(num % i == 0) {
                isprime = 0;

                break;
            }
        }

        if(isprime) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}