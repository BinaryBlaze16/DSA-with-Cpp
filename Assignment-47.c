#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Greater number: %d\n", a);
    else if (b > a)
        printf("Greater number: %d\n", b);
    else
        printf("Both are equal: %d\n", a);

    return 0;
}