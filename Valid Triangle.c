#include<stdio.h>
int main()
{
    int a , b ,c ; 
    scanf("%d",&a) ; 
    scanf("%d",&b) ;
    scanf("%d",&c) ;
    int sum = a + b + c ; 
    if (sum == 180)
    {
        printf("yes") ; 
    }
    else
    {
        printf("no") ; 
    }
}
