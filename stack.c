#include<stdio.h>
#include<limits.h>
#include<stdbool.h>


#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_LENGTH INT_MIN

int mystack[STACK_LENGTH];
int top = EMPTY;


bool push(itn value){
    if(top >= STACK_LENGTH-1) return false;

    top++;
    mystack[top] = value;
    return true;
}

int pop(){
    if (top == EMPTY) return STACK_EMPTY;

    int result = mystack[top];

    top--;
    return result;
}


int mainP(){
    push(56);
    push(3);
    push(36);
    

    int t;

    while ((t = pop()) != STACK_EMPTY){}
       printf("t = %d\n", t);
}
}