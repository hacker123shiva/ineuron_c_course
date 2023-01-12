/*#include<stdio.h>

int main()
{int a=0 , b=1;
int n;
printf("Enter number of term want for fibonaci: ");
scanf("%d",&n);
printf("Enter number of fibonaci number doyou want: %d %d",a,b);
   for(int i=2;i<=n;i++)
   {
      int temp;
      printf(" %d",a+b);
      temp=a;
      a=b;
      b=temp+b;

   }
   return 0;
}
*/
/*
#include<stdio.h>
int main()
{
   int hcf;
   int num1,num2,max,min;
   printf("Enter num1 and num2:");
   scanf("%d %d",&num1,&num2);
   max=num1>num2?num1:num2;
   min=num1<num2?num1:num2;
   while(1)
   {int temp;
      if(max%min==0)
      {
         printf("HCF is %d",min);
      return 0;
      }
      
      else
      temp=max%min;
      max=min;
      min=temp;
   }
}
*/

/*
#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {for(int j=1;j<=n;j++)
   if(i+j>=n+1)
   printf("*");
   else
   printf(" ");
   printf("\n");
   }
}
*/


/*#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {for(int j=1;j<=n;j++)
   if(i+j>=n+1)
   printf("*");
   else
   printf(" ");
   for(int j=1;j<=n-1;j++)
if(i==1 &&j==1)
printf(" ");
else if(i-1>=j)
printf("*");
   printf("\n");
   }
}*/
/*
#include<stdio.h>
int main(){
   int n,k;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {k=1;
      for(int j=1;j<=n;j++)
   {
      if(i+j>=n+1)
   {printf("%d",k++);
   }
   else
   printf(" ");
   }
   
   for(int j=1;j<=n-1;j++)
{
   if(i==1 &&j==1)
printf(" ");
else if(i-1>=j)
{printf("%d",--k-1);
}
}
   printf("\n");}
   }
   */
 /* #include<stdio.h>
  int main()
  {
   int n;
   printf("Enter value of n: ");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {char k='A';
    for(int j=1;j<=n;j++)
   if(i+j<=n+1)
   printf("%c",k++);
   printf("\n");}
   return 0;

  }*/
/*
  #include<stdio.h>
  int main()
  {
   int n;
   printf("Enter the value of n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
      char k='A';
      for(int j=1;j<=n;j++)
      if(i<=j)
      printf("%c",k++);
      else
      printf(" ");
      for(int j=1;j<=n-1;j++)
      if(i+j<=n)
      printf("%c",--k-1
      );
      printf("\n");
   }
   return 0;
  }*/

  /*#include<stdio.h>
  int main()
  {
   int n;
   printf("Enter the value of n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
      int k=1;
      for(int j=1;j<=n;j++)
      if(i<=j)
      {if(i+j==2*i)
      printf("%d",k);
      else
      printf("%d",k-1);
      }
      else
      printf(" ");
      for(int j=1;j<=n-1;j++)
      if(i+j<=n)
      {if(i+j==n)
  printf("%d",k);
  else
  printf("%d",k-1);
      }
     
      printf("\n");
   }
   return 0;
  }
  */
/*
 #include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {for(int j=1;j<=n;j++)
   if(i+j>=n+1)
   printf("*");
   else
   printf(" ");
   for(int j=1;j<=n-1;j++)
if(i==1 &&j==1)
printf(" ");
else if(i-1>=j)
printf("*");
   printf("\n");
   }
   n=n-1;
 for(int i=1;i<=n;i++)
   {printf(" ");
      for(int j=1;j<=n;j++)
      if(i<=j)
      printf("*");
      else
      printf(" ");
      for(int j=1;j<=n-1;j++)
      if(i+j<=n)
      printf("*");
      printf("\n");
   
   }
   return 0;
}
*/
#include<stdio.h>
int main()
{
   int n;
   printf("Enter the value of n: ");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {int k=n-i+1;
      for(int j=1;j<=n;j++)
   if(i+j<=n+1)
   printf("%d",k--);
   printf("\n");
   }
   return 0;

   

}
  