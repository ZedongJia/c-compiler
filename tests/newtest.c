struct Array
{
    int *data;
    int capacity;
    int size;
};

int arrayAllocate(struct Array *array, int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        array->data[i] = arr[i];
    }
    array->size = size;
    return 0;
}

int arrayAdd(struct Array *array, int data)
{
    if (array->size >= array->capacity)
    {
        return 1;
    }
    array->data[array->size] = data;
    array->size++;
    return 0;
}

int arrayRemove(struct Array *array, int index)
{
    for (int i = index; i < array->size - 1; i++)
    {
        array->data[i] = array->data[i + 1];
    }
    return 0;
}

int *test()
{
    int *a;
    return a;
}

int main(int argc, const char *argv[])
{
    struct Array array;
    array.capacity = 5;
    arrayAdd(&array, 1);
    arrayAdd(&array, 2);
    arrayAdd(&array, 3);
    arrayAdd(&array, 4);
    arrayAdd(&array, 5);
    arrayRemove(&array, 0);
    return 0;
}
