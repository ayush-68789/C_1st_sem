#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n ; 
    scanf("%d", &n) ; 
    int arr[n] ; 
    for (int  i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]) ; 
    }
    
    int sum = 0 ; 
    for (int i = 0 ; i < n ; i++)
    {
        sum += arr[i] ; 
    }
    if (sum%n == 0)
    {
        printf("%d",sum/n) ;
    }
    else
    {
        printf("%d",-1);
    }
    return 0;
}
