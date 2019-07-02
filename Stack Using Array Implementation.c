#include<stdio.h>
#include<stdlib.h>
struct stack
{
int * a;
int top;
int maxSize;
}s;
void initstack (struct stack *p, int maxSize){
    p->a = (int *)malloc(maxSize*sizeof(int));
    p->top=-1;
    p->maxSize=maxSize;
}
void push (struct stack * p){
    int item;
    if(p->top < p->maxSize-1)
    {
        printf("Enter the element to be pushed\n");
        scanf("%d",&item);
        p->top = p->top+1;
        p->a[p->top]=item;
    }
    else
        printf("Stack is full\n");
}
int pop (struct stack * p){
    if(p->top==-1)
        printf("-1000");
    else
        p->top=p->top-1;
};
void display (struct stack *p){
int i;
for(i=0;i<=p->top;i++)
    printf("%d ",p->a[i]);
printf("\n");
};
int main()
{
    int choice;
    printf("Enter the maximum size of the stack\n");
    scanf("%d",&choice);

    initstack(&s,choice);
    while(1)
    {
       printf("Choice 1 : Push\nChoice 2 : Pop\nChoice 3 : Display\nAny other choice : Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:push(&s);break;
            case 2:pop(&s);break;
            case 3:display(&s);break;
            default :exit(0);
        }
    }
    return 0;
}
