/*#include<stdio.h>
int main()
{
   int n;
   printf("Enter month number: ");
   scanf("%d",&n);
   switch(n)
   {
      case 1:
      printf("January");
      break;

         case 2:
      printf("February");
      break;

         case 3:
      printf("march");
      break;

         case 4:
      printf("April");
      break;

         case 5:
      printf("May");
      break;

         case 6:
      printf("June");
      break;

         case 7:
      printf("July");
      break;

         case 8:
      printf("August");
      break;

         case 9:
      printf("September");
      break;

         case 10:
      printf("October");
      break;

         case 11:
      printf("November");
      break;

      case 12:
      printf("December");
      break;

      default:
      printf("You are not entering valid input");
   }
   return 0;
}*/
  /*#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
  
  int a, b;
  printf("Enter value of a and b: ");
  scanf("%d %d",&a,&b);
   while(1){
      printf("Enter sign of operation \naddition: +\nsubtraction: -\nmultiplication: *\ndivision /\n exit e \n");
   
     char ch;
   scanf(" %c",&ch);
   
   switch(ch)
   {
      case '+':
      printf("%d\n",a+b);
      break;

         case '-':
      printf("%d\n",a-b);
      break;

         case '*':
      printf("%d\n",a*b);
      break;

         case '/':
      printf("%d\n",a/b);
      break;

         case 'e':
      exit(0);

      default:
      printf("You are not entering valid input");
   }
   }
   return 0;
}
*/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n;
   
    while(1)
   {printf("Enter n for day starting  Monday=1:");
   scanf("%d",&n);
   switch(n)
   {
      case 1:
      printf("Monday\n");
      break;

         case 2:
      printf("Tuesday\n");
      break;

         case 3:
      printf("Wednesday\n");
      break;

         case 4:
      printf("Thrusday\n");
      break;

         case 5:
      printf("Friday\n");
      break;

         case 6:
      printf("Saturday\n");
      break;

         case 7:
      printf("Sunday\n");
      break;
         case 8:
         exit(0);

      default:
      printf("You are not entering valid input\n");
   }

   }
   return 0;
}*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int side1, side2, side3,max;
    char ch;
    printf("Enter side1 ,side2 and side3: ");
    scanf("%d %d %d",&side1,&side2,&side3);
    if(side1<side1+side2&&side2<side1+side3&&side3<side1+side2)
   printf("Enter \n a: Check Traingle is eqaliteral or not \n b:check traingle is right angled or not \n c:check whether triangle is equaliteral or not \n d: exit");
 
   while(1)
   {printf("\nEnter: ");
    scanf(" %c",&ch);
   switch(ch)
   {case 'a':
    if(side1==side2||side2==side3||side1==side3)
    printf("Isosceles Traingle\n");
    else 
    printf("Not Isosceles triangle\n");
    break;
    case 'b':
    if(side1*side1==side2*side2+side3*side3||side2*side2==side1*side1+side3*side3||side3*side3==side2*side2+side1*side1)
    printf("Right angled triangle\n");
    else
    printf("Not right angled traingle\n");
    break;
    case 'c':
    if(side1==side2&&side2==side3)
    printf("Eqaliteral Traingle\n");
    else
    printf("Not Equaliteral traingle\n");
    break;
    case 'd':
    exit(0);

    default:
    printf("You are not enter valid input\n");
   } 
   }

return 0;
}
