#include <stdio.h>
int addTen(int x)
{
    x += 10;
    return x;
}
int addTwenty();
int x = 2000;
int main()
{
    int x = 90;
    int y = addTen(x);
    printf("addTen in main = %d\n", y);
    printf("addTwenty in main = %d\n", addTwenty());
}
int addTwenty()
{
    x += 20;
    return x;
}

// bitwise operator
// 5 = 0101
// 5 >> 2 => 01
// 5 << 2 => 010100
// 5 & 1 => 0101 & 0001 