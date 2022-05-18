#include <stdio.h>

int Fibo(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return Fibo(n-1) + Fibo(n-2);
}

int main(void)
{
    int N;
    scanf("%d", &N);
    printf("%d\n", Fibo(N));
    return 0;
}
