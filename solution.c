#include <stdio.h>

int pageCount(int n, int p)
{
    int fromStart = p / 2;           // Number of pages turned from the start
    int fromEnd = (n / 2) - (p / 2); // Number of pages turned from the end
    return (fromStart < fromEnd) ? fromStart : fromEnd;
}

int main()
{
    int n, p;
    scanf("%d %d", &n, &p);
    int result = pageCount(n, p);
    printf("%d\n", result);
    return 0;
}
