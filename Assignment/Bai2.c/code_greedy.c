#include <stdio.h>

typedef struct
{
    char c;
    int w;
    int v;
    float unit;
    int n;
}
object;

int main()
{
    int N, W;

    FILE *input = fopen("BAG.INP", "r");
    if (input == NULL)
        return 0;

    fscanf(input, "%d %d\n", &N, &W);
    object name[N], *order[N];
    for (int i = 0; fscanf(input, "%d %d %c\n", &object[i].w, &object[i].v, &object[i].c) != EOF; i++)
    {
        object[i].unit = (float) object[i].v / object[i].w;
        object[i].n = 0;
        order[i] = &object[i];
    }

    type *tmp;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if ((*order[i]).unit < (*order[j]).unit)
            {
                tmp = order[i];
                order[i] = order[j];
                order[j] = tmp;
            }
        }
    }

    int max ;
    for (int i = 0; i < N; i++)
    {
        if (W > (*order[i]).w)
        {
            (*order[i]).count = W / ((*order[i]).w);
            W %= (*order[i]).w;
            max += (*order[i]).v * ((*order[i]).n);
        }
    }

    printf("%d\n", max);
    for (int i = 0; i < N; i++)
    {
        if (object[i].count != 0)
            printf("%c %d\n", object[i].c, object[i].n);
    }

    fclose(input);

    return 0;
}
