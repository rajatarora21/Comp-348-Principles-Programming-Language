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
		int tempValue2=0;
		int tempValue3=0;
		char value[100];
		char c;
		while(1)
		{
			c=fgetc(filepointer);
			if(c==EOF)
				break;
			else if(c=='"')
			{
				if(tempValue3==0)
					tempValue3=1;
				else
					tempValue3=0;
			}
			if(tempValue3==0)
			{
				 if(c=='/')
				{
					c=fgetc(filepointer);
					if(c=='*')
						tempValue=tempValue+1;
					else if(c=='/')
						tempValue2=1;
				}	
				else if(c=='*')
				{
					c=fgetc(filepointer);
					if(c=='/')
						tempValue=tempValue-1;
				}
				else if((c=='\n')&&(tempValue2==1))
					tempValue2=0;

				else if(tempValue==0&&tempValue2==0)
					printf("%c",c);
			}
			else 
				printf("%c",c);

			

		}
		
		printf("\n\nyou are done\n\n");
	}	
	fclose(filepointer);
	return 0;
}
