#include <stdio.h>
#include <stdlib.h>

struct stack {

    int top;
    int* stackArray;
    unsigned sizeofStack;


};

struct stack* createStack(int sizeofStack){

    struct stack* stackPtr;
    stackPtr = (struct stack*) malloc(sizeof(struct stack)); //Stack Structure Creation
    stackPtr->sizeofStack = sizeofStack;
    stackPtr->top = -1;
    stackPtr->stackArray = malloc(sizeof(int) * stackPtr->sizeofStack);//Stack Array or Original Stack creation
    return stackPtr;

}

void push(struct stack *stackPtr){
    int value;
    if(stackPtr->top == stackPtr->sizeofStack-1)
        printf("STACK IS FULL");

    else{
        printf("ENTER VALUE --> ");
        fflush(stdin);
        scanf("%d",&value);
        stackPtr->top++; //Incrementing top to insert value
        stackPtr->stackArray[stackPtr->top] = value;
        printf("VALUE ADDED");
    }
}

int pop(struct stack* stackPtr){

    int value;
    if(stackPtr->top == -1)
        return -1;

    else{
        //Value pop out
        value = stackPtr->stackArray[stackPtr->top];
        stackPtr->top--; //Decrementing top after value pop out
        return value;
    }
}

void main(){

struct stack* stackPtr;
stackPtr = createStack(5);
int choice,value;
while(1){
    printf("\n 1. PUSH \n 2. POP \n 3. EXIT \n ENTER YOUR CHOICE --> ");
    fflush(stdin);
    scanf("%d",&choice);
    switch(choice){
        case 1:
                push(stackPtr);
                break;
        case 2:
                value = pop(stackPtr);
                if(value==-1)
                    printf("STACK IS EMPTY");
                else
                    printf("\n %d",value);
                break;
        case 3:
                exit(0);


        }
    }
}
