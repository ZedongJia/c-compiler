
int a = 5;
int a = 6; // redefination

extern void *malloc(int size);

int *getNumAddr(int *num)
{
    // do sth
    char a = 'a';
    a++;
    return num;
}

int getNum(int *num)
{
    return *num;
}

struct test
{
    int data;
};

int main(int argc, const char *argv[])
{
    // array check
    int arr[5] = 5;                    // incorrect
    int array[5] = {1, 2, 3, 4, 5, 6}; // too much
    int arryy[5][6][];                 // incompleted array type
    // def check
    char *str = "hello";
    char astr[6] = "hello";
    int a;
    int a = 5; // redeclaration
    int b = 0;
    int c = {5}; // incorrect initializer
    struct test t;
    struct test *tt;

    a = b;
    /* we use variables that have not been declared or definated */
    ccc = 5;
    // implicit conversion check
    float c;
    c = a;             // int -> float
    c = 1.0 + 2 + 'a'; // float, int -> float, char -> float

    // conversion
    (float *)c; // incorrect float -> float*
    (float *)&c;

    // ptr
    int *ptr;
    int **ptr1;
    ptr = &a;

    // assign
    ptr1 = ptr; // incorrect assign
    5 = a;      // not lvalue
    a = 6;
    a = "hello"; // incorrect string -> int

    // operator
    4 % 5.5;
    "ss" / 5;
    t.data;
    tt->data;
    tt.data; // dot incorrect
    t->data; // pointer incorrect

    // struct
    t.mm; // no member has been found

    // func
    int num = 5;
    getNumAddr(&num);
    getNum(&num);
    getNumAddr();           // less arguments
    getNumAddr(&num, 4, 5); // too many arguments

    // for

    for (int i = 0; i < 5; i++)
    {
        i += 5;
    }

    // if
    if (a > 5 || a + 1 <= 6)
    {
        a = 6;
    }
    else if (a >= 6 && a < 8 || a > 1)
    {
        a = 0;
    }
    else if (!(a != 5))
    {
        a = 8;
    }
    else
    {
        a = 1;
    }

    // while
    while (a == 5)
    {
        a = 0;
    }
    a + 5;
    a - 6;
    a * 5;
    a / 5;
    a % 5;
    *a; // not ptr
    *ptr;
    &a;

    int **n;
    int size = 10;
    for (int i = 0; i < size; i++)
    {
        n[i] = (int *)malloc(12);
    }

    n[1][2] + 5;
    n[1][2] = n[1][2] - 5;
    n[1][2] = n[1][2] * 5;
    n[1][2] = n[1][2] / 5;
    n[1][2] = n[3][5] + n[1][5];
    return 0;
}