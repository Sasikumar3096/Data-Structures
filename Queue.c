#include<stdio.h>
int front=-1,rear=-1;
int queue[10];
void enqueue()
{
    int value;
    printf("\n\nEnter the value to be inserted");
     scanf("%d",&value);
    if(front==-1){
        front=++rear;
        queue[front]=value;
    }
   else
    queue[++rear] = value;

}
void dequeue()
{
    if(front==-1)
        printf("\nScrew urself\n");
    else{
        if(front==rear){
            printf("%d",queue[front++]);
            front=-1;
            rear=-1;
        }
        else
           printf("%d",queue[front++]);
    }
}
void main()
{
    int ch;
    printf("Enter your choice:\n1-insert\n2-delete\n3.Exit:\n");
    scanf("%d",&ch);
    while(1)
    {
            if(ch==1)
                enqueue();
            if(ch==2)
                dequeue();
            if(ch==3)
                exit(0);
        printf("Enter your choice:\n1-insert\n2-delete:\n");
        scanf("%d",&ch);
    }
}
