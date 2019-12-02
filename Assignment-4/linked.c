#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//defining node structure
typedef struct node
{
   char data[255];//can store upto 255 characters
   struct node *next;
}Node;
Node *head=NULL;//initially linked list is empty
//method to insert in sorted order
void insert_dictionary_order(char *a)
{
   Node *n = (Node*)malloc(sizeof(Node));//creating new node
   strcpy(n->data,a);//reading data
   n->next=NULL;
   Node *temp=head,*prev=NULL;
   if(temp==NULL)
   {
       head=n;  
   }
   else
   {//inserting in right position
       while(temp!=NULL)
       {
           if(0<strcmp(temp->data,a))
           break;
           prev=temp;
           temp=temp->next;  
       }
       if(prev==NULL)
       {
           n->next=head;
           head=n;  
       }
       else
       {
           n->next=prev->next;
           prev->next=n;  
       }  
   }
}
//method to print all words in list
void print_list()
{
   Node *temp=head;
   while(temp!=NULL)
   {
       printf("%s ",temp->data);
       temp=temp->next;  
   }
   printf("\n");
}
int main()
{
   printf("Enter words seperated by spaces:(. or EOF to stop):\n");
  
   do
   {
       char s[255];
       scanf("%s",s);
       if(strcmp(s,".")==0 || strcmp(s,"EOF")==0)
       {
           insert_dictionary_order(s);//adding to list
           break;
       }
       else
       {
           insert_dictionary_order(s);//adding to list  
       }
   }
   while(1);
   //now printing list
   print_list();
   return 0;
}
