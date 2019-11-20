#include<stdio.h>
int main()
{
	FILE *filepointer;
	filepointer = fopen("sample.txt","r");
	if(filepointer==NULL)
	{
		printf("\n\nGet lost\n\n");
	}
	else
	{
		printf("\n\nThe file has been openend\n\n");
		char value[100];
		while(fgets(value,100,filepointer)!=NULL)
		{
			printf("%s",value);
		}
		printf("you are done");
	}	
	fclose(filepointer);
	return 0;
}
