#include<stdio.h>
int top=-1;
int stack[10];
void push()
{
    int value;
    printf("\n\nEnter the value to be inserted:");
    scanf("%d",&value);
    if(top==-1){

        stack[++top]=value;
        printf("\nValue Inserted");
    }
    else if(top>9){
        printf("\nStack Overflow");
    }
    else{
    stack[++top] = value;
     printf("\nValue Inserted");}
}
void pop()
{
    if(top==-1)
        printf("\n****No Value to delete*****");
    else
        printf("\n\nThe Deleted Value is %d.",stack[top--]);
}
void main()
{
    int ch;
    printf("Enter your choice:\n1-insert\n2-delete\n3.Exit:\n");
    scanf("%d",&ch);
    while(1)
    {
            if(ch==1)
                push();
            if(ch==2)
                pop();
            if(ch==3)
                exit(0);

        printf("Enter your choice:\n1-insert\n2-delete\n3.Exit:\n");
        scanf("%d",&ch);
    }
}
