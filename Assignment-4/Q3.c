#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int value;
	struct Node *next;	

};
	struct Node *head=NULL;

void insertBegin(int value)
{
	struct Node *t=malloc(sizeof(struct Node));
	if(head==NULL)
	{
		head=t;
		head->value=value;
		head->next=NULL;
		return;
	}
	t->value=value;
	t->next=head;
	head=t;
}
void display()
{
	if(head==NULL)
	{
		printf("No items present");
		return;
	}
	else
	{
		struct Node *t;
		t=head;
		while(t->next!=NULL)
		{
			printf("%d\n",t->value);
			t=t->next;
		}
		printf("%d",t->value);
	}
		
}
int main()
{
	while(1)
	{
 	 printf("1. Insert an element at beginning of linked list.\n");
   	 printf("2. Insert an element at end of linked list.\n");
   	 printf("3. Traverse linked list.\n");
   	 printf("4. Delete element from beginning.\n");
   	 printf("5. Delete element from end.\n");
   	 printf("6. Exit\n");
	 int input;
	 scanf("%d",&input);
	 if(input==1)
	 {
	 	insertBegin(10);
	 }
	 else if(input==2)
	 {
	 	
	 }
	 else if(input==3)
	 {
	 	display();
	 }
	 else if(input==4)
 	 {
		
	 }
	 else if(input==5)
	 {
	 	
	 }
	 else if(input==6)
		 exit(0);
	}
	


}
