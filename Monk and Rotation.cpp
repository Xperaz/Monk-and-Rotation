#include <stdio.h>

void    rotate(long int *tab, long int n, long int k)
{
    long int i;
    long int res;
    
    k %= n;
    for (i = 0; i < n; i++)
    {
        res = tab[(i + (n - k)) % n];
        printf("%ld ", res);
    }
    printf("\n");
}

int main()
{
    long int n, k, t, i;
    
    scanf("%ld", &t);
    while (t--)
    {
        scanf("%ld %ld", &n, &k);
        long int tab[n];
        for (i = 0; i < n; i++)
            scanf("%ld", &tab[i]);
        rotate(tab, n, k);
    }
    return 0;
}
