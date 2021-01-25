
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define ull unsigned long long int

typedef struct 
{
    int weight;
    int value;
    int quanity;
    float unitVal;
    char name;
} Object;

/*
   Anonymous function to compare two objects by unit value 
*/
int comparator(const void *ptr1, const void *ptr2)
{
    Object obj1 = *(Object *)ptr1;
    Object obj2 = *(Object *)ptr2;
    return (obj1.unitVal < obj2.unitVal) - (obj1.unitVal > obj2.unitVal);
}

/*
    Dynamic allocate array of objects
*/
Object *mallocObjects(int size)
{
    return (Object *)malloc(size * sizeof(Object));
}

/*
    Helper function to debug
*/
void printObject(Object obj)
{
    printf("%c(%d,%d) : %d \n", obj.name, obj.weight, obj.value, obj.quanity);
}

int main()
{
    int N, T;
    FILE *input_file = NULL;

    input_file = fopen("./BAG.INP", "r");

    assert(input_file != NULL);

    fscanf(input_file, "%d %d", &N, &T);

    Object *objects = mallocObjects(N); //* Cấp phát động objects

    for (int i = 0; i < N; i++)
    {
        Object tmp;
        fscanf(input_file, "%d %d %c", &tmp.weight, &tmp.value, &tmp.name);
        tmp.unitVal = (float)(tmp.value) / (float)(tmp.weight); //* TÍnh giá trí trên khối lượng từng object

        objects[i] = tmp;
    }

    qsort(objects, N, sizeof(Object), comparator); //* Sắp xếp mảng object theo giá trị trên khối lượng

    int cur_weight = T;
    int cur_var = 0;

    for (int i = 0; i < N; i++)
    {
        // https://www.tutorialspoint.com/c_standard_library/c_function_div.htm
        div_t divRet = div(cur_weight, objects[i].weight);
        int quanitity = divRet.quot; //* thương của phép chia là số lượng đồ vật này được lấy

        cur_var += quanitity * objects[i].value;
        cur_weight = divRet.rem;//* phần dư thì là khối lượng còn lại để cho thêm những vật tiếp theo

        objects[i].quanity = quanitity; 

        // printObject(objects[i]);
    }

    printf("%d \n", cur_var);

    for (int i = 0; i < N; i++)
    {
        if (!objects[i].quanity)
            continue;
        printf("%c %d \n", objects[i].name, objects[i].quanity);
    }

    fclose(input_file);
    free(objects);
    return 0;
}