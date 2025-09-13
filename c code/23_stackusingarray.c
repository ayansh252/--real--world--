#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *sp, int val)
{
    if (isfull(sp))
    {
        printf("Stack is overflow\n");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = val;
    }
}
int pop(struct stack *sp)
{
    if (isempty(sp))
    {
        printf("stack is underflow\n");
    }
    else
    {
        int temp = sp->arr[sp->top];
        sp->top--;
        return temp;
        
    }
}

int peek(struct stack *sp,int i)
{
    int print=sp->top-i+1;
    if(print<0)
    {
        printf("Not a valid position for the stack");
        return -1;
    }
    else{
        sp->arr[print];

    }
}
 int stacktop(struct stack  *sp){
     return sp->arr[sp->top];
 }
 int stackbottom(struct stack  *sp){
     return sp->arr[0];
 }
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));

    // struct stack s;
    // s.size=80;
    // s.top=-1;
    // s.arr=(int *)malloc(s.size*sizeof(int));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // check wether stack is empty or not

   
     printf("Stack has been created successfully\n");
        printf("Before pushing, Full: %d\n", isfull(s));
    printf("Before pushing, Empty: %d\n", isempty(s));
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);
    push(s, 6);
    push(s, 7);
    push(s, 8);
    push(s, 9);
    push(s, 10);
    printf("After pushing, Full: %d\n", isfull(s));
    printf("After pushing, Empty: %d\n", isempty(s));
   
    // printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    // printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    // printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    // for(int j=1;j<s->top+1;j++)
    // {
    //     printf("The value at position %d is %d\n", j, peek(s, j));
    // }
    int d=stacktop(s);
    int f=stackbottom(s);
    printf("the top nost element of stack is: %d\n",d);
    printf("the bottom nost element of stack is:%d\n",f);
    return 0;
}