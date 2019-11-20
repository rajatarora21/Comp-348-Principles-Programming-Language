#include<stdio.h>
#include<string.h>
int main()
{
	FILE *filepointer;
	filepointer = fopen("sample.c","r");
	if(filepointer==NULL)
	{
		printf("\n\nGet lost\n\n");
	}
	else
	{
		printf("\n\nThe file has been openend\n\n");
		int tempValue=0;
		char value[100];
		char c;
		while(1)
		{
			
			c=fgetc(filepointer);
			if(c==EOF)
				break;
			else if(c=='/'&&fgetc(filepointer)=='*')
				tempValue=1;
			else if(tempValue==1&&c=='*'&&fgetc(filepointer)=='/')
				tempValue=0;
			else if(tempValue==0)
				printf("%c",c);


		}
		printf("you are done");
	}	
	fclose(filepointer);
	return 0;
}
