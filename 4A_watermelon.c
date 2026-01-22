/*
 * Link:
 *  https://codeforces.com/problemset/problem/4/A
 */

#include <stdio.h>

int main(void) {
    int w;
    scanf("%d", &w);

    if (w>2 && w%2==0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
