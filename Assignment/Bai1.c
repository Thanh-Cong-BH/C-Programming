#include <stdio.h>

int Factorial(int N)
{
    int i,F;
    if (N<=1) {F=1;}
    else 
    {
        F=1;
        for (i=1; i<=N;i++)
        { F=F*i; }
        
    }
    return F;
}

int main()
{
    int n,k;
    printf("Nhap n,k: ");
    scanf("%d %d", &n, &k);
    printf("%d", Factorial(n)/(Factorial(k)*Factorial(n-k)));
    return 0;
}
