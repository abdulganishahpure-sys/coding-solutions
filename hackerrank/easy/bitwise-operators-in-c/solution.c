#include <stdio.h>

void calculate_the_maximum(int n, int k)
{
    int i, j;
    int max_and = 0, max_or = 0, max_xor = 0;

    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if ((i & j) < k && (i & j) > max_and)
                max_and = i & j;
            if ((i | j) < k && (i | j) > max_or)
                max_or = i | j;
            if ((i ^ j) < k && (i ^ j) > max_xor)
                max_xor = i ^ j;
        }
    }
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
