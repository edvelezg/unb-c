#include <stdio.h>

//function prototy[pe
int iterative(int n);
int recursive(int n);

int main()
{
    int result = 0;
    result = iterative(3);

    result = recursive(4);
    printf("result: %d\n",result);

    return 0;
}


int iterative(int n)
{
    int total = 0;
    for (int i = 1; i <= n; ++i)
    {
        total = total * i;
    }
    return(total);
}

int recursive(int n)
{
    int total = 0;
    printf("stacking recursive(%d)\n",n);

    if (n == 1)
    {
        printf("total: %d\n",total);
        return n;
    } else
    {
        total = n * recursive(n-1);
        printf("total: %d\n",total);
        return total;
    }
}
