#include<stdio.h>
#include<stdlib.h>

void push(int*,int*,int);
void display(int*,int*,int);
void pop(int*,int*,int);
void peek(int*,int*,int);


int main()
{
    int n,ch,*p,top=-1;
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
            case 1: push(p,&top,n);
                    break;
            case 2: pop(p,&top,n);
                    break;
            case 3: display(p,&top,n);
                    break;
            case 4: peek(p,&top,n);
                    break;
            case 5: exit(0);
            default: printf("\n\nenter valid choice............ ");
        }
    }
}


void push(int *p,int *top,int n)
{
    int val;
    printf("\n\nenter the value : ");
    scanf("%d",&val);
    *top+=1;
    if(*top==n)
    {
        printf("\n\nstack is full............ ");
        *top-=1;
    }
    else
        *(p+*top)=val; 
}


void pop(int *p,int *top,int n)
{
    if(*top==-1)
        printf("\nstack is empty...........");
    else   
    {
        printf("\npopped element is : %d",*(p+*top));
        *top-=1;
    }   
}




void display(int *p,int *top,int n)
{
    int i=0;
    if(*top==-1)
         printf("\nstack is empty...........");
    else 
    {
        for(i=0;i<=*top;i++)
        {
            printf("\n%d",*(p+i));
        }
    }
}


void peek(int *p,int *top,int n)
{
    if(*top==-1)
        printf("\nstack is empty...........");
    else    
        printf("\ntop element is : %d",*(p+*top));
}