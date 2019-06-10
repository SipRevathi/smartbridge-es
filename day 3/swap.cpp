#include<stdio.h>
int main()
{

int x,y;

	printf("enter values of x ");
	scanf("%d",&x);
	printf("enter value of y");
	scanf("%d",&y);
    printf("\n before swapping x=%d and y=%d",x,y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("\n after swapping x=%d and y=%d",x,y);
}
