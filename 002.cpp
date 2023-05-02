#include<stdio.h>
#include<stdlib.h>
int x,y,answer;

int add(int x,int y);//the function prototype

int main()//the main function
{
	printf("x=");
	scanf("%d",&x);//the scan-format,get user input
	printf("y=");
	scanf("%d",&y);
	answer=add(x,y);
	printf("%d+%d=%d\n",x,y,answer);
	system("pause");
	return 0;
}

int add(int x,int y)//the add function,function definition
{
	return x+y;//return the result
}
