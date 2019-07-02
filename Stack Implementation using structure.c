#include<stdio.h>
#include<stdlib.h>
struct stack {
int data ;
struct stack * link ;
}*s=NULL,*p,*temp;
void push (){
    int item;
    printf("Enter the element to be pushed\n");
        scanf("%d",&item);
     p =(struct stack*)malloc(sizeof(struct stack));
     p->data=item;
     p->link = s;
     s=p;
}
int pop (){

        if(s){
            printf("The popped element is %d",s->data);
        s=s->link;
        }else
        printf("Stack is empty");
    printf("\n");
};
void display (){
    printf("The contents of the stack are ");
    temp=s;
    if(s){
            while(temp){
            printf("%d ",temp->data);
            temp=temp->link;
            }
        }
    else
        printf("{}");
    printf("\n");
};
int main()
{
    int choice;
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
