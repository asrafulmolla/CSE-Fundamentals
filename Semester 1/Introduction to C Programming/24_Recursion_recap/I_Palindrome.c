#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001], b[1001];
    scanf("%s", a);
    strcpy(b, a);
    int i = 0, j = strlen(a) - 1;
    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    int cnt = 0;
    if(strcmp(a,b)==0) printf("YES");
    else printf("NO");
}