//============================================================================
//
// Filename   : thread_structures.h
// Author     : Kuba Sejdak
// Created on : 20 gru 2014
//
//============================================================================

#ifndef THREADSTRUCTURES_H
#define THREADSTRUCTURES_H

#include <ucontext.h>

#define THREAD_NAME_MAX_LENGTH      16
#define THREAD_STACK_DEPTH          1024

/// @brief Represents current state of thread in terms of scheduling.
typedef enum
{
    STATE_PENDING,
    STATE_READY,
    STATE_RUNNING
} taskstate_t;

// @brief Represents thread handle and all its resources.
typedef struct
{
    int id;
    char name[THREAD_NAME_MAX_LENGTH];
    char stack[THREAD_STACK_DEPTH];
    int priority;
    taskstate_t state;
    ucontext_t context;
} mythread_t;

#endif