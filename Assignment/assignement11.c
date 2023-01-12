/*#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     sum=sum+i;
    }
    printf("%d",sum);
    getch();
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     sum=sum+2*i;
    }
    printf("%d",sum);
    getch();
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     sum=sum+2*i-1;
    }
    printf("%d",sum);
    getch();
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     sum=sum+i*i;
    }
    printf("%d",sum);
    getch();
    return 0;
}*/
/*
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     sum=sum+i*i*i;
    }
    printf("%d",sum);
    getch();
    return 0;
}
*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int n,fact=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     fact=fact*i;
    }
    printf("%d",fact);
    getch();
    return 0;
}
*/
/*#include<stdio.h>
#include<conio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    while(n)
    {
     n=n/10;
     count++;
    }
    printf("%d",count);
    getch();
    return 0;
}*/
/*#include<stdio.h>
#include<conio.h>
int main()
{
    int n,flag=0;
    printf("Enter value of n");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
     if(n%i==0)
     {
        flag=1;
        break;
     }
    }
     if(flag==0)
     printf("%d is prime number",n);

    else 
    printf("%d is not prime number",n);
    

    getch();
    return 0;
}*/

 
/*#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,m,min,lcm=1,flag=0;
    printf("Enter value of n and m\n");
    scanf("%d %d",&n,&m);
    min=(m+n+abs(m-n))/2;
    for(int i=2;i<=min/2;i++)
    {
     if(m%i==0&&n%i==0)
     {
        lcm=i;
        break;
     }
    }
     
     printf("%d is LCM of %d and %d ",lcm,m ,n);

    getch();
    return 0;
}
*/
/*#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rev=0;
    printf("Enter num value");
    scanf("%d",&num);
    while(num)
    {rev=(rev*10+num%10);
    num=num/10;
    }
    printf("Reverse of number is %d",rev);
return 0;
}*/


/*

C Language Community LIVE Classes
Assignment-11


Write a program to calculate sum of first N natural numbers
Write a program to calculate sum of first N even natural numbers
Write a program to calculate sum of first N odd natural numbers
Write a program to calculate sum of squares of first N natural numbers
Write a program to calculate sum of cubes of first N natural numbers
Write a program to calculate factorial of a number
Write a program to count digits in a given number
Write a program to check whether a given number is a Prime number or not
Write a program to calculate LCM of two numbers
Write a program to reverse a given number

*/