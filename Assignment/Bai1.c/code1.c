#include <stdio.h>

double Fac(int N)
{
  int i;
  double F=1;
    if (N == 0)
      {return 1 ;}
    for (i=1; i<=N; i++)
      {F=F*i; }
    return F;
    
}

int main()
{
    int n, k;
    double A;

    FILE *input = fopen("ToHop.inp", "r");
    if (input == NULL)
    {
        printf("Reading error!\n");
        return 1;
    }
    FILE *output = fopen("ToHop.out", "w+");
    if (output == NULL)
    {
        printf("Output error!\n");
        return 1;
    }
    
    while (fscanf(input, "%d %d\n", &n, &k) != EOF)
    {
        A = Fac(n) / (Fac(k) * Fac(n - k));
        fprintf(output, "%.0lf\n", A);
    }
    
    fclose(input);
    fclose(output);

    return 0;
}

