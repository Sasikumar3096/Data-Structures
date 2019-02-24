#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;

}*head,*temp,*p,*q;
void atFirst(struct node *list,int num)
{
    p = (struct node*)malloc(sizeof(struct node));

    p->data= num;
    p->next=list->next;
    list->next=p;
  //  printf("%d",list->next->data);
}
void atLast(struct node *list,int num)
{
if(list->next!='\0')
    {
       atLast(list->next,num);
    }
else
{  //
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data=num;
    temp->next=NULL;
    list->next=temp;

}
}
void atMid(struct node *list,int num,int pos)
{   int i;
    for( i =1;i<pos;i++)
        list=list->next;
     temp = (struct node*)malloc(sizeof(struct node));
     temp->data=num;
     temp->next=list->next;
     list->next=temp;
}
void display(struct node *head)
{       printf("\n");
    if(head->next!=NULL)
    {

        for(p=head->next;p->next!=NULL;p=p->next)
            printf("%d  ",p->data);
            printf("%d ",p->data);
            printf("\n\n");
}
}
int delValue(struct node *list,int num)
{
    if(list->next->data!=num)
        delFirst(list->next,num);
    if(list->next==NULL)
        return 0;
    else
    {
        list->next=list->next->next;

    }
}
int delFirst(struct node *list)
{   if(list->next=NULL)
        return 0;
    list->next=list->next->next;
    return 1;
}
int delEnd(struct node *list)
{   if(list->next=NULL)
        return 0;
    else

    if(list->next->next!=NULL)
        delEnd(list->next);
    else
        list->next=NULL;
        return 1;


}
int getData()
{   int num;
    printf("\n\nEnter the number:");
    scanf("%d",&num);
    return num;
}
int getPos()
{   int num;
    printf("\n\nEnter the pos:");
    scanf("%d",&num);
    return num;
}
void swap(struct node *list)
{

p=list->next;
q=list->next->next;
temp=q->next;
list->next=q;
q->next=p;

    if(temp==NULL||temp->next==NULL)
    {
    p->next=temp;
    return;
    }
p->next=temp;
if(temp->next!=NULL)
    swap(p);
}

int main()
{   int ch,pos,ch1,status;
    head = (struct node*)malloc(sizeof(struct node));
    head->data=NULL;
    head->next=NULL;
    while(1)
    {
    printf("1.Insertion");
    printf("\n2.Deletion");
    printf("\n3.Display\n4.Exit\n5. Swap\n\n");
    printf("-->");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Insertion At: \n\t1 At Start \t2 At middle\t3 At End ");
            scanf("%d",&ch1);
            switch(ch1)
            {
            case 1:
                atFirst(head,getData());
                break;
            case 2:
                atMid(head,getData(),getPos());
                break;
            case 3:
                atLast(head,getData());
                break;
            }
        break;
    case 2:

        printf("Deletion At: \n\t1 At Start \t2 At middle\t3 At End ");
                    scanf("%d",&ch1);
            switch(ch1)
            {
            case 1:
               status= delFirst(head);
                break;
            case 2:

                status=delValue(head,getPos());
                break;
            case 3:
                status=delEnd(head);
                break;
            }
            if(status==0)
                printf("\nNot Found");
            else
                printf("\nDeleted");
            break;
        case 3: display(head);
                break;
        case 4:
            exit(0);
        case 5:
            swap(head);
    }

    }

}
