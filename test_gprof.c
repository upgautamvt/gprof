//test_gprof.c
#include "./test_gprof_new.h"
#include<stdio.h>

void func1(void) {
    printf("\n Inside func1 \n");
    int i = 0;

    for (; i < 0xffffffff; i++);
    new_func1();
    new_func1();
    new_func1();
}

static void func2(void) {
    printf("\n Inside func2 \n");
    int i = 0;

    for (; i < 0xffffffaa; i++);
}

int main(void) {
    printf("\n Inside main()\n");
    int i = 0;

    for (; i < 0xffffff; i++);
    func1();
    func1();

    func2();

    return 0;
}