/*
//Solution:1)
#include<stdio.h>
#include<conio.h>

void check_divisibilty(int num)
{if(num%3==0&&num%2==0)
printf("NUmber is divisible by 3 and 2");
else
printf("Number is not divisible by 3 and 4");
}
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    check_divisibilty(num);
    getch();
    return 0;
}*/
/*
//Solution:2)
#include<stdio.h>
#include<conio.h>

void check_divisibilty(int num)
{if(num%7==0||num%3==0)
printf("NUmber is divisible by 7 and 3");
else
printf("Number is not divisible by 7 and 3");
}
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    check_divisibilty(num);
    getch();
    return 0;
}
*/
/* 
//Solution:3)
#include<stdio.h>
#include<conio.h>

void check_nature_number(int num)
{if(num>0)
printf("NUmber %d is positive",num);
else if(num<0)
printf("Number %d is negative",num);
else
printf("Number %d is Zero",num);
}
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    check_nature_number(num);
    getch();
    return 0;

}*/

/* 
//Solution:4)
#include<stdio.h>
#include<conio.h>

void check_leap_year(int num)
{
    if(num%100==0)
    if(num%400==0)
    printf("Given year %d is leap year",num);
    else
    printf("Given year %d is not leap year",num);

    else
    if(num%4==0)
    printf("Given year %d is leap year",num);
    else
    printf("Given year %d is not leap year",num);
    getch();
    return;
}
int main()
{
    int num;
    printf("Enter year");
    scanf("%d",&num);
    check_leap_year(num);
    getch();
    return 0;
}
*/

/*
//Solution:5
#include<stdio.h>
#include<conio.h>

int greatest_among_three(int a, int b, int c)
{
    int great;
    great=a>b&&a>c?a:b>c?b:c;
    return great;
}

int main()
{
    int num1, num2 ,num3,great;
    printf("Enter three number\n");
    scanf("%d %d %d",&num1,&num2,&num3);
   great= greatest_among_three(num1,num2,num3);
   printf("Greatest number is %d",great);
   getch();
    return 0;
}
*/

/* 
The C<ctype.h> header file declares a set of functions to classify (and 
transform) individual charcters.
isupper() --- check whether a charcter is uppercase or not.
islower() --- check whether a charcter is lowercase or not.
isalnum() --- check whether a charcter consist digit or alphabet only.
isdigit() --- check whether a charcter is numeric charcter or not.
isprint() --- check whether a charcter is printable or not.
isspace() --- check white-space charcter


tolower() --- converts alphabet to lowercase
toupper() --- converts alphabet to uppercase

*/

/* //Solution:6
#include<stdio.h>
#include<conio.h>
 
#include<ctype.h>
void check_charcter(int ch)
{
    if(islower(ch))
    printf("Given charcter %c is in lowercase",ch);
    else if(isupper(ch))
    printf("Given charcter %c is in uppercase",ch);
    else if(isdigit(ch))
    printf("Given charcter %c is digit",ch);
    else 
    printf("Special charcter %c",ch);
    return;
}

int main()
{
    char ch;
    printf("Enter a charcter");
    scanf("%c",&ch);
    check_charcter(ch);
    getch();
    return 0;

}

*/
 
/*
// solution:7)
#include<stdio.h>
#include<conio.h>
void valid_traingle(int side1, int side2, int side3)
{
    int side[3]={side1,side2,side3};
if(side1>0 && side2>0 && side3>0)
 { for(int i=0;i<2;i++)
  for(int j=0;j<2-i;j++)
  {int temp;
   if(side[i]>side[i+1])
   temp=side[i];
   side[i]=side[i+1];
   side[i+1]=temp;
  }

  if(side[0]+side[1]<side[2])
  printf("Valid triangle");
  else
  printf("Invalid triangle");
  return;}

  else 
  printf("Invalid triangle");
}
int main()
{
    int side1,side2,side3;
    scanf("%d %d %d",&side1,&side2,&side3);
    valid_traingle(side1,side2,side3);
    getch();
    return 0;
}
*/
/*
// Solution:8)
  #include<stdio.h>
#include<conio.h>
enum month{jan=1,feb,mar,apr,may,june,july,aug,sep,oct,nov,dec };
int check_leap_year(int num)
{
    if(num%100==0)
    if(num%400==0)
    return 1;
    else
     return 0;

    else
    if(num%4==0)
    return 1;
    else
    return 0; 
     
    
}
int display_days(int num_month, int year)
{int n=num_month;
if(n<=12&&n>=1)
{if(num_month==feb)
{
    if(check_leap_year(year))
    return 29;
    else 
    return 28;
}
 
else if( n==jan || n==mar || n==may || n==july || n==aug || n==oct ||n==dec)
return 31;
else 
return 30;
}

else return 0;

}
int main()
{
    int num_month ,year;
    printf("month number and year: ");
    scanf("%d %d",&num_month,&year);
    if(display_days(num_month,year))
    printf("number of days in %d month is %d",num_month ,display_days(num_month,year));
    else 
    printf("you input invalid month or year");
    getch();
    return 0;
}
*/
/*
// Solution:9) 
#include<stdio.h>
#include<conio.h>
void nature_root(float a ,float b ,float c)
{
    float d;
    d=b*b-4*a*c;
    if(d==0)
    {
        printf("Real and equal root");

    }
    else if(d>0)
    {
        printf("real and distinct");

    }
    else 
    printf("Imaginary roots");


}

int main()
{
float a, b ,c;
printf("Enter a, b and c");
scanf("%f %f %f",&a,&b,&c);
nature_root(a,b,c);
return 0;
}
*/

// Solution:10)
#include<stdio.h>
#include<conio.h>

float percent(int mark1, int mark2 ,int mark3, int mark4 ,int mark5)
{
    float per;
    per=(float)(mark1+mark2+mark3+mark4+mark5)/500*100;
    
if(per>=90)
printf("Grade A");
else if(per<90&&per>=80)
printf("Grade B");
else if(per<80&&per>=70)
printf("Grade C");
else if(per<70&&per>=60)
printf("Grade D");
else if(per<60&&per>=40)
printf("Grade E");
else
printf("Grade F");
  return per;}
int main()
{
    int phy ,che , bio ,mat ,com;
    float per;
    printf("Enter marks of a student has 5 sub");
    scanf("%d %d %d %d %d",&phy,&che,&bio,&mat,&com);
    per=percent(phy,che,bio,mat,com);
    printf("\npercentage= %f",per);
    return 0;

}