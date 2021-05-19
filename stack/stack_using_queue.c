#include<stdio.h>
#include<stdlib.h>

void push(int*,int*,int*,int);
void display(int*,int*,int*,int);
int* pop(int*,int*,int*,int);
void peek(int*,int*,int*,int);


int main()
{
    int n,ch,*p,front,rear;
    front=-1;
    rear=-1;
    printf("enter the size of the stack : ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    while(1)
    {
        printf("\n\n\n1.push");
        printf("\n2.pop");
        printf("\n3.display");
        printf("\n4.peek");
        printf("\n5.exit");
        printf("\n\nenter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push(p,&front,&rear,n);
                    break;
            case 2: p=pop(p,&front,&rear,n);
                    break;
            case 3: display(p,&front,&rear,n);
                    break;
            case 4: peek(p,&front,&rear,n);
                    break;
            case 5: exit(0);
            default: printf("\n\nenter valid choice............ ");
        }
    }
}


void push(int *p,int *front,int *rear,int n)
{
    int val;
    printf("\n\nenter the value : ");
    scanf("%d",&val);
    *rear+=1;
    if(*rear==n)
    {
        printf("\n\nstack is full............ ");
        *rear-=1;
    }
    else
        *(p+*rear)=val;
    *front=0;    
}


int* pop(int *p,int *front,int *rear,int n)
{
    int *q,i,j,front1=-1,rear1=-1;
    q=(int *)malloc(n*sizeof(int));
    if(*front==-1)
    {
        printf("\nstack is empty...........");
        return p;
    }
    else
    {
        if(*front==*rear)
        {
            printf("\npopped element is: %d",*(p+*rear));
            *front=-1;
            *rear=-1;
            return p;
        }    
        else
        {
            printf("\npopped element is: %d",*(p+*rear));
            rear1++;
            for(i=*front,j=rear1;i<*rear;i++,j++)
            {
                *(q+j)=*(p+i);
            }
            rear1=j-1;
            front1=0; 
            *rear=rear1;
            *front=front1;
            return q; 
        }
    }
}




void display(int *p,int *front,int *rear,int n)
{
    int i=0;
    if(*front==-1)
         printf("\nstack is empty...........");
    else 
    {
        for(i=*front;i<=*rear;i++)
        {
            printf("\n%d",*(p+i));
        }
    }
}


void peek(int *p,int *front,int *rear,int n)
{
    if(*rear==-1)
        printf("\nstack is empty...........");
    else    
        printf("\ntop element is : %d",*(p+*rear));
}