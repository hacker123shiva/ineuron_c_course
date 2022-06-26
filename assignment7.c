
/*
Solution:1)
#include<stdio.h>
#include<conio.h>
int main()
{int num;
printf("Enter a number");
scanf("%d",&num);
if(num>0)
printf("Given number %d is Positive",num);
else
printf("Given number is non positive");
getch();
return 0;
}*/

/*
Solution:2)
#include<stdio.h>
#include<conio.h>
int main()
{int num;
printf("Enter a number");
scanf("%d",&num);
if(num%5==0)
printf("Given number %d is divisible by 5",num);
else
printf("Given number is not divisible by 5");
getch();
return 0;
}*/

/*
Solution:3)
#include<stdio.h>
#include<conio.h>
int main()
{int num;
printf("Enter a number");
scanf("%d",&num);
if(num%2==0)
printf("Given number %d is even",num);
else
printf("Given number %d is odd",num);
getch();
return 0;
}*/

/*
Solution:4)
#include<stdio.h>
#include<conio.h>
int main()
{int num;
printf("Enter a number");
scanf("%d",&num);
if(num&1==0)
printf("Given number %d is even",num);
else
printf("Given number is odd");
getch();
return 0;
}*/

/*
Solution:5)
#include<stdio.h>
#include<conio.h>
int main()
{int num;
printf("Enter a number");
scanf("%d",&num);
if(num/1000!=0)
printf("Given number %d is not 3 digit number",num);
else
  if(num/100!=0)
     printf("Given number %d is 3 digit number",num);
  else
     printf("Given number %d is not 3 digit number",num);
getch();
return 0;
}*/

/*
Solution:6)
#include<stdio.h>
#include<conio.h>
int main()
{
 int num1, num2;
 printf("Enter two number num1 and num2\n");
 scanf("%d %d",&num1,&num2);
 printf("Greatest number is %d",num1>num2?num1:num2);
 getch();
 return 0;
 
}*/

/*


*/

/*
Solution:7)
#include<stdio.h>
#include<conio.h>
int main()
{
    int cost , selling ;
    float percent_gain;
    scanf("%d %d",&cost,&selling);
    if(selling>cost)
    {percent_gain=(float)(selling-cost)/cost*100;
    printf("Precent gain %f",percent_gain);
    }
    else
   {percent_gain=(float)(selling-cost)/cost*100;
    printf("precent loss or no profit %f",-percent_gain);}
    getch();
    return 0;

}*/

/*
Solution:8)
#include<stdio.h>
#include<conio.h>
int main()
{
   int sub[5],mark_obtain=0;
   float percentage;
   for(int i=0;i<5;i++)
   {
    scanf("%d",&sub[i]);
   } 
  for(int i=0;i<5;i++)
  {
    mark_obtain=mark_obtain+sub[i];
  }
percentage=(float)mark_obtain/500*100;
printf("Percentage obtained is %f",percentage);
getch();
return 0;
}
*/

/*
Solution:9)#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    char A;
    scanf("%c",&A);
    if(isupper(A))
    printf("Given alphabet %c in uppercase",A);
    else if(islower(A))
    printf("Given alphabet %c in lowercase",A);
    else
    printf("Given character %c is not alphabet",A);

    getch();
    return 0;

}
*/

/*
Solution:10)
 #include<stdio.h>
#include<conio.h>
int main()
{
    int age,invest_amount, SI;
    printf("Enter age and invest money\n");
    scanf("%d %d",&age ,&invest_amount);
    if(invest_amount<=100000&& invest_amount>=10000)

   { if(age>=18 && age<25)
    SI=invest_amount*5*30/100;
    
    else if(age>=25&& age<40)
    SI=invest_amount*5*20/100;

    else if(age>=40&&age<=55)
    SI=invest_amount*5*10/100;

    else 
    printf("Your age beyound age policy");
    
    printf("Total Maturity amount is %d",SI+invest_amount);}
 
    else
    printf("Please invest money in range 10000 to 100000");
     
    getch();
    return 0;}*/

    /*
C Language Community LIVE Classes
Assignment-7


1)Write a program to check whether a given number is positive or non positive
2)Write a program to check whether a given number is divisible by 5 or not
3)Write a program to check whether a given number is even or odd
4)Write a program to check whether a given number is even or odd without using the modulus operator.
5)Write a program to check whether a given number is a three digit number or not.
6)Write a program to find greater between two numbers. Print one number if both numbers are the same.
7)Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
8)Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed. 
9)Write a program to check whether a given alphabet is in uppercase or lowercase.
10)A policy agent has to inform about the amount a client will get after maturity of the scheme. If the client comes in the age group 18 to 25 then the policy period is 30 years, if the client comes in the age group 25 to 40 then the policy period is 20 years and if the client comes in the age group 40 to 55 then the policy period is 10 years. Policy is not for other age groups. Clients can invest any amount lesser than or equal to 100000 but must be greater than or equal to 10000. Rate of return is 5% using simple interest. Write a program to take age and investment amount. Print the maturity amount a client will get.

    */




