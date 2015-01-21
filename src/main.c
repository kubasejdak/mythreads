//============================================================================
//
// Filename   : main.c
// Author     : Kuba Sejdak
// Created on : 20 gru 2014
//
//============================================================================

#include "scheduler.h"
#include "thread.h"

#include <unistd.h>
#include <stdio.h>

void func_1(void *data)
{
    printf("1111111111111111\n");
    printf("1111111111111111\n");
    printf("1111111111111111\n");
}

void func_2(void *data)
{
    printf("2222222222222222\n");
    printf("2222222222222222\n");
    printf("2222222222222222\n");
}

void func_3(void *data)
{
    printf("3333333333333333\n");
    printf("3333333333333333\n");
    printf("3333333333333333\n");
}

int main(int argc, char *argv[])
{
    printf("===== MyThread test app =====\n");

    // Start scheduler with given policy.
    start_scheduler(POLICY_ROUND_ROBIN);

    // Create some threads.
    mythread_start(func_1, NULL);
    mythread_start(func_2, NULL);
    mythread_start(func_3, NULL);

    while(1)
        sleep(10);

    return 0;
}
