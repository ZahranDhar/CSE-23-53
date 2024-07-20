//Check whether a number is prime or not.

#include <stdio.h>

int main(){

    int i,n,flag;

    printf("Enter a number to check if prime.\n");
    scanf("%d",&n);

    if(n<=1)
    {
        flag=0;
    }
    else
    {
        for(i=2; i<=7; i++)
    {
        if(n%i!=0)
        {
            flag=1;
        }
        else if (n%i==0 && n==i)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
            break;
        }
    }
    }

    if(flag==1)
    {
        printf("The number is prime.\n");
    }
    else
    {
        printf("The number is not prime.\n");
    }


    return 0;

}