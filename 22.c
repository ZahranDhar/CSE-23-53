//Display the Fibonacci series: 0 1 1 2 3 5 8 13 21 ....... (n terms)

#include<stdio.h>
#include<math.h>

int main(){

    int i,n,x,y;

    printf("Enter n\n");
    scanf("%d",&n);

    x=0;
    printf("0 ");
    y=1;
    printf("1 ");
    for(i=1; i<=(n-2); i++)
    {
        y=y+x;
        printf("%d ",y);
        x=y-x;
    }

    return 0;

}