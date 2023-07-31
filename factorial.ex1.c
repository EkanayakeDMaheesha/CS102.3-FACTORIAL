#include<stdio.h>
int main()
/*{
    int x,c,f=1;

    printf("Enter a number: ");
    scanf("%d",&x);

    for(c=1;c<=x;c++)
       {
         f=f*c;

       }
    printf("\nFactorial of %d is: %d \n",x,f);

}*/

//second way

{
    int x,c,f=1;

    printf("Enter a number: ");
    scanf("%d",&x);

    for(c=x;1<=c;c--)
       {
         f=f*c;

       }
    printf("\nFactorial of %d is: %d \n",x,f);

}
