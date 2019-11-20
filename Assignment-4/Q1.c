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
		char value[100];
		char c;
		while(1)
		{
			
			c=fgetc(filepointer);
			if(c==EOF)
				break;
			if(tempValue!=1)
			{
				if(c=='/'&&fgetc(filepointer)=='/')
					tempValue2=1;
			}
			if(tempValue2)
			else if(c=='/'&&fgetc(filepointer)=='/'&&tempValue==0)
				tempValue2=1;
			else if(c=='/'&&fgetc(filepointer)=='*'tempValue2==0)
				tempValue=1;
			else if(tempValue==1&&c=='*'&&fgetc(filepointer)=='/')
				tempValue=0;
			else if(tempValue2==1&&c=='\n')
				tempValue2=0;
			else if(tempValue==0&&tempValue2==0)
				printf("%c",c);


		}
		printf("\n\nyou are done\n\n");
	}	
	fclose(filepointer);
	return 0;
}
