#include<stdio.h>
int fun(int n)
{
   if(n==0)
	   return 1;
   return (n*fun(n-1));

}
int main()
{
	int x=fun(3);
	printf("\n\n%d\n\n",x);
  	printf("hello there");
	return 0;
}
