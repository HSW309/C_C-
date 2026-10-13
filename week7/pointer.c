#include <stdio.h>

int main()
{
    int a = 100;
    int *p;
    p = &a;

    printf("%d\n", (*p++));    // 100
    (*p)++;                    // 100 (이후 101이 됨)
    printf("%d\n", *p + 1);    // 101
    (*p) + 1;                  // 102를 반환 (값은 101)
    printf("%d\n", *p += 1);   // 101
    *p += 1;                   // 102
    printf("%d\n", (*p) += 1); // 102
    (*p) += 1;                 // 103
    printf("%d\n", ++*p);      // 103
    ++*p;                      // 104를 반환
    printf("%d\n", ++(*p));    // 104
    ++(*p);                    // 105를 반환
    printf("%d\n", &p);        // 105

    return 0;
}