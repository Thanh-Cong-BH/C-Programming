#include <stdio.h>

long long Fac(int N)
{
    int i;
    F=1;
    if (N == 0)
      {return 1 ;}
    for (i=1; i<=N; i++)
      {F=F*i; }
    return F;
    
}

int main()
{
    int n, k;
    long long A;

    FILE *input = fopen("ToHop.inp", "r");
    if (input == NULL)
        return 0;
    FILE *output = fopen("ToHop.out", "w");
    if (output == NULL)
        return 0;

    while (fscanf(input, "%d %d\n", &n, &k) != EOF)
    {
        A = Fac(n) / (Fac(k) * Fac(n - k));
        fprintf(output, "%lld\n", A);
    }
    
    fclose(input);
    fclose(output);

    return 1;
}

