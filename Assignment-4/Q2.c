#include<stdio.h>
int main()
{
	float f;
	typedef union {
		double d;
		float f;
		unsigned char bytes[0];
	}binary;
	binary hel;
	printf("Float or double:");
	char choice;
	int end;
	scanf("%c",&choice);
	if(choice=='f')
	{
		end=sizeof(float);
	}
	else if(choice=='d')
	{
		end=sizeof(double);
	}
	printf("enter the value :");
	scanf("%f",&hel.f);
	for(int i=end-1;i>=0;i--)
	{
		char b=hel.bytes[i];
		for(int j=7;j>=0;j--)
		{
			if(((b>>j)&1)==1)
				printf("X");
			else
				printf("0");
		}
	}
	return 0;
}
