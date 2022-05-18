#include <stdio.h>

int Factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * Factorial(n-1);
}
int main(void)
{
    int N = 0;
    scanf("%d", &N);
    printf("%d\n", Factorial(N));
    return 0;
}
