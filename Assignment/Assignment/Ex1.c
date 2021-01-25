#include <stdio.h>
#include <stdlib.h>

#define ull unsigned long long int
//* Hàm tìm ước chung lon nhất
ull gcd(ull n1, ull n2)
{
    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;
}

/*
 Hàm tìm tổ hợp nCr theo công thức nCr = (n - r + 1)! / (r)!
 Nếu r lớn hơn n - r thì r bằng n - r, vì nCr = nC(n-r)
*/
ull comb(ull n, ull r)
{
    if (r == 0)
        return 1;
    ull numerator = 1;
    ull denominator = 1;
    r = (r > (n - r)) ? n - r : r; //* Nếu r lớn hơn n - r thì r bằng n - r, vì nCr = nC(n-r)

    while (r)
    {
        numerator *= n;
        denominator *= r;

        ull divider = gcd(numerator, denominator); //* Mỗi lần nhân thêm phải chia cho ước chung của cả tử và mẫu để không bị tràn số

        numerator /= divider;
        denominator /= divider;
        n--;
        r--;
    }

    return (numerator / denominator);
}

int main()
{
    FILE *input_file = NULL;
    FILE *output_file = NULL;
    input_file = fopen("./TOHOP.INP", "r");
    output_file = fopen("./TOHOP.OUT", "w+");

    int num1;
    int num2;

    while (fscanf(input_file, "%d %d", &num1, &num2) != EOF)
    {
        ull *result;
        result = (ull *)malloc(sizeof(ull)); //* cấp phát động từng kết quả từng dòng, do không biết trong file có bao nhiêu dòng
        *result = comb(num1, num2);
        fprintf(output_file, "%llu \n", *result);
        free(result);
    }

    fclose(input_file);
    fclose(output_file);
    printf("Done !");
    return 0;
}