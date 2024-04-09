#include <stdio.h>

int main()
{

    int a, b, c, d, e;
    scanf("%d", &a);
    b = a / 3600;
    e = a % 3600;
    c = e / 60;
    d = e % 60;
    printf("%d:%d:%d", b, c, d);

    return 0;
}
