#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
	int data;
	struct node *next;
}node;

void display(node*);
node* split_even_odd(node*,node*,node*);

int main()
{
	node *head=NULL,*head1=NULL,*head2=NULL,*ptr,*current;
	int val,ch;
	while(1)
	{
		printf("\nenter the value : ");
		scanf("%d",&val);
		ptr=(node *)malloc(sizeof(node));
		ptr->data=val;
		ptr->next=NULL;
		
		if(head==NULL)
		{
			head=ptr;
			current=ptr;
		}
		else
		{
			current->next=ptr;
			current=ptr;
		}	
		printf("\ndo you nwant to continue?(0/1).......");
		scanf("%d",&ch);
		if(ch!=1)
			break;
	}	
	printf("\nthe list is : \n");
	display(head);
	split_even_odd(head,head1,head2);
}

void display(node *head)
{
	node *ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		printf("\t%d\t",ptr->data);
		ptr=ptr->next;
	}	
}


node* split_even_odd(node *head,node *head1,node *head2)
{
	node *ptr,*current1,*current2;
	if(head==NULL)
		printf("\nno list exist");
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			if(ptr->data%2!=0)
			{
				if(head1==NULL)
				{
					head1=ptr;
					current1=ptr;
					ptr=ptr->next;	
					current1->next=NULL;
				}	
				else
				{
					current1->next=ptr;
					current1=ptr;
					ptr=ptr->next;	
					current1->next=NULL;
				}
			}
			else
			{
				if(head2==NULL)
				{
					head2=ptr;
					current2=ptr;
					ptr=ptr->next;	
					current2->next=NULL;
				}	
				else
				{
					current2->next=ptr;
					current2=ptr;
					ptr=ptr->next;	
					current2->next=NULL;
				}
			}
			
		}
		
	}
	printf("\nthe odd list is : \n");
	display(head1);
	printf("\nthe even list is : \n");
	display(head2);
	printf("\n");		
	return head;
}















































