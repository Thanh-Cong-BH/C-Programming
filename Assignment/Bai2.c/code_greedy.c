#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
        return 1;

    fscanf(input, "%d %d\n", &N, &W);
    object name[N], *order[N];
    for (int i = 0; fscanf(input, "%d %d %c\n", &name[i].w, &name[i].v, &name[i].c) != EOF; i++)
    {
        name[i].unit = (float) name[i].v / name[i].w;
        name[i].n = 0;
        order[i] = &name[i];
    }

    object *tmp;
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
            (*order[i]).n = W / ((*order[i]).w);
            W %= (*order[i]).w;
            max += (*order[i]).v * ((*order[i]).n);
        }
    }

    printf("%d\n", max);
    for (int i = 0; i < N; i++)
    {
        if (name[i].n != 0)
            printf("%c %d\n", name[i].c, name[i].n);
    }

    fclose(input);

    return 0;
}
