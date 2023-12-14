// #include <stdio.h>

// struct Array
// {
//     int *data;
//     int capacity;
//     int size;
// };

// int arrayAllocate(struct Array *array, int *arr, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         array->data[i] = arr[i];
//     }
//     array->size = size;
//     return 0;
// }

// int add(struct Array *array, int data)
// {
//     if (array->size >= array->capacity)
//     {
//         return 1;
//     }
//     array->data[array->size] = data;
//     array->size++;
//     return 0;
// }

// int remove(struct Array *array, int index)
// {
//     for (int i = index; i < array->size - 1; i++)
//     {
//         array->data[i] = array->data[i + 1];
//     }
//     return 0;
// }

int *test()
{
    int *a;
    return a;
}
void *malloc(int size);
int main(int argc, const char *argv[])
{
    int *s, **b;
    s = test();
    b = (int *)malloc(8);
    b = &s;
    int c[5];
    // struct Array array;
    // array.capacity = 5;
    // add(&array, 1);
    // add(&array, 2);
    // add(&array, 3);
    // add(&array, 4);
    // add(&array, 5);
    // remove(&array, 0);
    // return 0;
}
