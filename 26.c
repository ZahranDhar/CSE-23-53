//Find sum of series: 1 + 1/2 + 1/4 + 1/6 + ….+ 1/n

#include<stdio.h>

int main(){

    int i,n;
    float x=1;

    printf("Enter n.\n");
    scanf("%d",&n);

    while(n%2!=0)
    {
        printf("The number is odd. Please enter even number.");
      
        scanf("%d",&n);
    }

    for(i=2; i<=n; i=i+2)
    {
        x=x+(1.0/i);
    }

    printf("%f",x);


    return 0;

}
