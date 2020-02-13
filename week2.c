#include <stdio.h>
#include <stdlib.h>
char name[20];
char number[5];
int main()
{
    // printf("%s\n",name);
    // int i;
    // scanf("%s %d",name, &i);
    // printf("Enter name :");
    // gets(name);
    // fgets(name, 20, stdin); //กำหนดขนาดสตริงที่จะรับได้
    // printf("name = %s\n", name);
    // char number[5];
    // fgets(number,5,stdin);
    // int i = atoi(number);
    // printf("number = %s, i = %d\n", number, i);
    // char a = getchar();
    // getchar(); ไว้เก็บ enter
    // char b = getchar();

    // long l = atoi(number);
    // double d = atof(number);

    // puts(number);
    // putchar(100); putchar('a');

    int found = 0;
    float isExist = 0.0;
    char isOnline = '\0'; //สามค่านี้เป็น False

    // fgets(number,5,stdin);
    // int i = atoi(number);
    // if (i >= 0 && i <= 10){
    //     printf("if = %d", i >= 0 && i <= 10);
    // }else if (i <= 50 || !found){
    //     printf("else if")
    // }
    fgets(number,5,stdin);
    int i = atoi(number);
    // int count = 0;
    // while (count<i){
    //     // count++ * count - 5;
    //     // ++count * count - 5; //++count ทำก่อน count++
    //     printf("%d\n", count);
    //     count++;
    // }
    for (int j = 0; j<i; j++){ //ค่าเริ่มต้น เงื่อนไข คำสั่งหลังจบแต่ละลูป
        printf("%d\n", j);
    }
    while (1){
        //infinite loop
    }

    // 10.0/100.0 //percent in lab use this!
} 