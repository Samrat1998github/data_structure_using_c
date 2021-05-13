#include<stdio.h>
#include<stdlib.h>


typedef struct node{
	int data;
	struct node *next;
}node;





void display(node *);
node* insert_front(node *);
void insert_last(node *);
node* insert_middle(node *);
node* delete_front(node *);
node* delete_last(node *);
node* delete_middle(node *);
node* insert_before(node *);
node* insert_after(node *);
node* delete_before(node *);
node* delete_after(node *);





int main()
{
	node *head=NULL,*current,*ptr;
	int val,ch;
	while(1)
	{
		printf("\nenter the value : ");
		scanf("%d",&val);
		ptr=(node *)malloc(sizeof(node));
		ptr->next=NULL;
		ptr->data=val;
		if(head==NULL)
			head=ptr;	
		else
			current->next=ptr;
		current=ptr;
		printf("\ndo you want to continue?(1/0)");
		scanf("%d",&ch);
		if(ch!=1)
			break;		
	}
	
	while(1)
	{
		printf("\n1.display");
		printf("\n2.insert in front");
		printf("\n3.insert in last");
		printf("\n4.insert in middle");
		printf("\n5.delete from front");
		printf("\n6.delete from end");
		printf("\n7.delete from middle");
		printf("\n8.insert before a given data");
		printf("\n9.insert after a given data");
		printf("\n10.delete before a given data");
		printf("\n11.delete after a given data");
		printf("\n00.exit");
		printf("\nenter your choice...... : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0:exit(0);
			case 1:display(head);
				break;
			case 2:head=insert_front(head);
				break;
			case 3:insert_last(head);
				break;	
			case 4:head=insert_middle(head);
				break;
			case 5:head=delete_front(head);
				break;
			case 6:head=delete_last(head);
				break;
			case 7:head=delete_middle(head);
				break;	
			case 8:head=insert_before(head);
				break;
			case 9:head=insert_after(head);
				break;
			case 10:head=delete_before(head);
				break;
			case 11:head=delete_after(head);
				break;						
			default : printf("\nplease enter valid choice........\n");
				break;	
		}	
	}
	return 0;
}

void display(node *head)
{
	node *ptr;
	ptr=head;
	if(head==NULL)
		printf("\nno list exist..............");
	else
	{	
		printf("\nlist is.........\n");
		while(ptr->next!=NULL)
		{
			printf("\t%d\t->",ptr->data);
			ptr=ptr->next;
		}			
		printf("\t%d\t",ptr->data);	
	}	
}

node* insert_front(node *head)
{
	node *ptr;
	int val;
	printf("\nenter the value : ");
	scanf("%d",&val);
	ptr=(node *)malloc(sizeof(node));
	ptr->next=head;
	ptr->data=val;
	head=ptr;
	printf("\nvalue succesfully inserted.............. ");
	return head;
}

void insert_last(node *head)
{
	node *ptr,*ptr1;
	int val;
	printf("\nenter the value : ");
	scanf("%d",&val);
	ptr=(node *)malloc(sizeof(node));
	ptr->next=NULL;
	ptr->data=val;
	if(head==NULL)
		head=ptr;	
	else
	{
		ptr1=head;
		while(ptr1->next!=NULL)
			ptr1=ptr1->next;
		ptr1->next=ptr;		
	}
	printf("\nvalue succesfully inserted.............. ");	
}


node* insert_middle(node *head)
{
	node *ptr,*ptr1;
	int val,pos,i,flag=0;
	printf("\nenter the value : ");
	scanf("%d",&val);
	printf("\nenter the position : ");
	scanf("%d",&pos);
	ptr=(node *)malloc(sizeof(node));
	ptr->next=NULL;
	ptr->data=val;
	
	if(pos==1)
	{
		ptr->next=head;
		head=ptr;
		printf("\nvalue succesfully inserted.............. ");
	}
	else
	{
		i=1;
		ptr1=head;
		while(ptr1->next!=NULL)
		{
			if(i==pos-1)
			{
				ptr->next=ptr1->next;
				ptr1->next=ptr;
				printf("\nvalue succesfully inserted.............. ");
				flag=1;			
			}
			i++;
			ptr1=ptr1->next;
		}
		if(i==pos-1)
		{
			ptr->next=ptr1->next;
			ptr1->next=ptr;
			printf("\nvalue succesfully inserted.............. ");
			flag=1;
		}
		if(flag!=1)
			printf("\nposition not found........");
	}	
	return head;
}

node* delete_front(node *head)
{
	node *ptr;
	if(head==NULL)
		printf("\nno list exist.........");	
	else
	{
		head=head->next;
		printf("\ndeleted succesfully...............");
	}
	return head;			
}

node* delete_last(node *head)
{
	node *ptr,*ptr1;
	if(head==NULL)
		printf("\nno list exist.........");	
	else
	{
		ptr=head;
		ptr1=ptr->next;
		if(ptr1==NULL)
			head=NULL;
		else
		{	
			while(ptr1->next!=NULL)
			{
				ptr=ptr1;
				ptr1=ptr1->next;
			}
			ptr->next=NULL;
			printf("\ndeleted succesfully...............");
		}			
	}	
	return head;
}



node* delete_middle(node *head)
{
	node *ptr,*ptr1;
	int pos,i,flag=0;
	printf("\nenter the position : ");
	scanf("%d",&pos);
	if(head==NULL)
		printf("\nno list exist.........");	
	else
	{	
		if(pos==1)
		{
			head=head->next;
			printf("\nvalue deleted successfully .............. ");
		}
		else
		{
			i=1;
			ptr1=head;
			while(ptr1!=NULL)
			{
				if(i==pos-1)
				{
					ptr=ptr1->next;
					if(ptr->next==NULL)
						ptr1->next=NULL;
					else
						ptr1->next=ptr->next;
					printf("\nvalue deleted successfully .............. ");
					flag=1;			
				}
				i++;
				ptr1=ptr1->next;
			}
			if(flag!=1)
				printf("\nposition not found........");
		}
	}		
	return head;
}

node* insert_before(node *head)
{
	node *ptr,*ptr1,*ptr2;
	int val,pos,i,flag=0;
	printf("\nenter the value : ");
	scanf("%d",&val);
	printf("\nenter the value you want to search : ");
	scanf("%d",&pos);
	ptr=(node *)malloc(sizeof(node));
	ptr->next=NULL;
	ptr->data=val;
	
	ptr1=head; 
	 
	if(ptr1->data==pos)
	{
		ptr->next=ptr1;
		head=ptr;
		printf("\nvalue succesfully inserted.............. ");
	}
	else
	{
		ptr2=ptr1->next;
		if(ptr2->data==pos)
		{
			ptr->next=ptr2;
			ptr1->next=ptr;
			printf("\nvalue succesfully inserted.............. ");
			flag=1;
		}
		else
		{
			while(ptr2!=NULL)
			{
				if(ptr2->data==pos)
				{
					ptr->next=ptr2;
					ptr1->next=ptr;
					printf("\nvalue succesfully inserted.............. ");
					flag=1;
					break;
				}
				ptr2=ptr2->next;
				ptr1=ptr1->next;		
			}
		}
		if(flag!=1)
			printf("\nvalue not found........");
	}
	return head;
}
node* insert_after(node *head)
{
	node *ptr,*ptr1;
	int val,pos,i,flag=0;
	printf("\nenter the value : ");
	scanf("%d",&val);
	printf("\nenter the value you want to search : ");
	scanf("%d",&pos);
	ptr=(node *)malloc(sizeof(node));
	ptr->next=NULL;
	ptr->data=val;
	
	ptr1=head; 
	 
	while(ptr1!=NULL)
	{
		if(ptr1->data==pos)
		{
			ptr->next=ptr1->next;
			ptr1->next=ptr;
			printf("\nvalue succesfully inserted.............. ");
			return head;
		}
		ptr1=ptr1->next;		
	}
	printf("\nvalue not found........");
	return head;
}

node* delete_before(node *head)
{
	node *ptr1,*ptr2;
	int pos;
	printf("\nenter the value you want to search : ");
	scanf("%d",&pos);
	if(head==NULL)
		printf("\nno list exist.........");
	else
	{	
		ptr1=head;
		ptr2=ptr1->next;
		if(ptr1->data==pos)
			printf("\nthis is the first node deletion not possible............");
		else if(ptr1->next==NULL)
			printf("\nonly one node exist deletion not possible............");
		else if(ptr2->data==pos)
		{
			head=head->next;
			printf("\nvalue deleted succesfully.............. ");
		}	
		else
		
		{	 
			while(ptr2->next!=NULL)
			{
				if(ptr2->next->data==pos)
				{
					ptr1->next=ptr2->next;	
					printf("\nvalue deleted succesfully.............. ");
					return head;
				}
				ptr1=ptr2;
		   		ptr2=ptr2->next;		
			}
			printf("\nvalue not found........");
		}
	}	
	return head;
}
node* delete_after(node *head)
{
	node *ptr1;
	int pos;
	printf("\nenter the value you want to search : ");
	scanf("%d",&pos);
	if(head==NULL)
		printf("\nno list exist.........");
	else
	{	
		ptr1=head;	 
		while(ptr1!=NULL)
		{
			if(ptr1->data==pos)
			{
				if(ptr1->next==NULL)
					printf("\nonly one value exist deletion not possible............");
				else
				{
					ptr1->next=ptr1->next->next;
					printf("\nvalue deleted succesfully.............. ");
				}
				return head;	
			}
		   	ptr1=ptr1->next;		
		}
		printf("\nvalue not found........");
	}		
	return head;
}






































