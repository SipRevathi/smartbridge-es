#include<stdio.h>
#include <conio.h>
int main()
{
	int i,n,sumeven=0,sumodd=0;
	printf("enter any number");
	scanf("%d",&n);
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
		
			sumeven=sumeven+i;
			
		
		else
		
			sumodd=sumodd+i;
    } 
		
		printf("\nsum of even numbers is : %d",sumeven);
		printf("\nsum of odd numbers is : %d ",sumodd);
	
}
