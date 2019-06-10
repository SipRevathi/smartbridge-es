#include <stdio.h>
int main()
{
    int n=10, i, sum = 0;
    
    printf("%d",n);

    for(i=1; i <= n; ++i)
    {
        sum += i;  
    }

    printf("Sum = %d",sum);

    return 0;
}

