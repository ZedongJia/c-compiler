# C 语言编译器的实现

## 相关概念设计

### 程序

Program

### 声明

Declare for variable, function, argument

> @example
```
Modifier Type ID,...;
```

### 定义

Definate for variable, function

> @example
```
Modifier Type ID = Initializer,ID...;
```

### 初始化

Initializer, InitializerList, BraceInitializer

> @example
```
5, {5}, {55555,{4444, {22222}}}
```

### 语句

Defination statment, Declaration statment statment

> @example
```
;
a + b = 5;
...
```

### 表达式

## 相关内容

### 语句

> @example
```
> , >=, <, <=, ==, !=

=, +, -, \*, /, %

., ->

if
for
while
return
```

### 常见类型

int, float, char, void

### 常见值

int, float. char, string

### 函数

> @example
```
const void set();
const void set(int a, struct node \*b)
void set() {
print();
int a =0;
}
```
### 数组

...

### 指针

...

### 结构体

...
