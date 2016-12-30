#include <conio.h>
#include <stdio.h>
int main()
{
    int n,i,j,prime,count=0;
    printf("enter the value of n");
    scanf("%d",&n);
//for(i=0;i<=n/2;i++)
for(i=2;i<n;i++)
{
    prime=1;
    for(j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
          prime=0;
          break;
        }
    }
    if(prime==1)
    {


        printf("%d \n",i);
        count++;

}}
printf("%d",count);
return 0;
}


