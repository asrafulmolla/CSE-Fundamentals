/* Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V */

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    int cnt[k];
    for (int i = 1; i <= k; i++) {
        cnt[i] = 0;
    }
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i++) {
        cnt[a[i]]++;
    }
    for (int i = 1; i <= k; i++) {
        //if(cnt[i]>0){
            printf("%d\n", cnt[i]);
        //}
    }
}
