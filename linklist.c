#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *create_list(int n) { 
    struct node *num;
    num = (struct node *)malloc(sizeof(struct node));
    num->data = n;
    num->next = num;
}
int addlist() {
    int n;
    scanf("%d",&n);
    if (n != -1) {
        create_list(n);
        addlist();
    }
}
int main() { 
    addlist();
}