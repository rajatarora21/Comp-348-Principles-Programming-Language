#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
	char data[255];
	struct Node *next;
}Node;
int main()
{
	
	Node list;
	Node *head;
	printf("Enter some line:");
	char value[255];
	scanf("%[^\n]%*c",value);
	int c=0;
	int start=0;
	while(value[c]!='\0')
	{
		
		if(value[c]=='.'&&value[c-1]==' '&&value[c+1]==' ')
			break;
		if(value[c]==' ')
		{
			
			if(head==NULL)
			{
				head=malloc(sizeof(Node));
				head->data=value[]
			}				
		}
			
		printf("%c",value[c]);
		c++;
	}


}
