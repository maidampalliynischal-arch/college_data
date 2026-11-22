/*Strong Number
Definition: A number that equals the sum of the factorials of its individual digits. (A factorial, written as n!, means multiplying all whole numbers from 1 up to n).
 Example: 145 is a Strong number.
	 1! + 4! + 5! = (1) + (4 × 3 × 2 × 1) + (5 × 4 × 3 × 2 × 1)
	 1 + 24 + 120 = 145
Other Examples: 1 and 2 (1! = 1, 1! + 2! = 3 wait, 2! = 2, 2 is 2! = 2, 145 and 2 are examples, also 40 is not, 1, 2, 145 are the primary ones).

#include<stdio.h>
void main()
{ 
    int n;
    printf("the num:");
    scanf("%d", &n);
    int x,f =1;
    int s=0;
    while (n > 0)
    {
        int i = 1;
        x = n%10;
        n= n/10;
        f = 1;
        while(i <= x)
        {
            f = f*i;
            i++;
        }
        printf("%d\n", f);
        
        s = s+f;
        f++;
    }
        {
            printf("%d", s);
        }
    
}
*/


/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n > 0)
    {
        int x = n % 10; // reverse the number
        n/= 10;
        printf("%d", x);
        x++;
    }

}*/



#include<stdio.h>
int main()
{
    int original,x;
    int current = 0;
    scanf("%d", &x);
    original = x;
    while(x > 0)
    {
       { int d;              //palindrome number
    
        d = x % 10;
        current = current * 10 + d;
        x = x / 10;
       }
    }
    while(current > 0)
    {
        if (current == original)
        {
            printf("palindrome");
        }
    
       else
        {
            printf("not palindrome");
       }
        return 0;
    }
}

/*
#include<stdio.h>
int main()
{
    int x, y, z;
    scanf("%d", &x);
    y =x%10;
    z = x;
    while(z > 10){      //sum of first and last digit
        z/=10;
    }
    printf("%d", y+z);
}*/


/*#include <stdio.h>
int main()
{
    int x, count = 0;
    scanf("%d", &x);
    while(x > 0)
    {
        int y = x % 10;
        x/= 10;                //check if there are any zeroes in the number

        {
            if(y == 0)
            {
                count++;
            }
        }
    } 
    if (count > 0)
    {
        printf("yes");
    }
    printf("%d zeroes", count);
}*/




/*#include <stdio.h>
int main()
{
    int x, sum = 0;
    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        if (x == 0)
        {                            //sum of numbers until 0 is entered
            break;
        }
        else if (x != 0)
        {
            sum += x;
        }

        
    }
       printf("The sum of the numbers is: %d", sum);

}*/
       


/*#include <stdio.h>
int main()
{
    int x, count = 0;
    while(1)
    {
        printf("Enter a number: ");  //counting no of positive numbers until 0 is entered
        scanf("%d", &x);
        if(x > 0)
        {
            count++;
        }
        else if(x == 0)
        {
            break;
        }
    }
    printf("%d", count);
}

*/


/*#include <stdio.h>
int main()
{
    int x, count = 0, z = 0;
    while(1)
    {
        printf("Enter a number: ");  //counting no of positive & negative numbers until 0 is entered
        scanf("%d", &x);
        if(x > 0)
        {
            count++;
        }
        else if(x == 0)
        {
            break;
        }
        else if(x < 0)
        {
            z++;
        }
    }
    printf("positive: %d\n", count);
    printf("negative: %d", z);
}*/
/*
#include <stdio.h>
#include <limits.h>
int main()
{
    int x = 0;
    while(1)
    {
        int max = INT_MIN;
        printf("Enter a number: ");  //finding max number until 0 is entered
        scanf("%d", &x);
        while(1)
        {
            printf("Enter a number: "); 
            scanf("%d", &x);
            if (x > max)
            {
                max = x;
                x++;
            }
            else if (x == 0)
            {
                break;
            }

        }
        printf("The maximum number is: %d", max);
    }
}*/


/*#include <stdio.h>
#include <limits.h>
int main()
{
    int x, count = 0;
    int min = x;

    while(1)  //finding min number until 0 is entered
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        if(x == 0)
        {
            break;
        }
        if(x < min)
        {
            min = x;
        }
        
        count++;
    }    
     if(count > 0){   
        printf("The minimum number is: %d", min);
    }
}*/


/*#include <stdio.h>
int main()
{
    float n = 0.5,x;
    printf("Enter a number: ");  //printing powers of two until it is greater than the number entered
    scanf("%f", &x);             //doubt : it is giving a numbe in extra and the number is greater than n
    while(n < x)
    {
        n*=2;
        if (n>x)
        {
            break;
        }
        else 
        {
            printf("%.f\n", n);
        }
    }
}*/

/*#include <stdio.h>
int main()
{
    int x, count = 0;
    printf("Enter a number: ");  //finding how many times a number can be divided by 2 until it is less than 1
    scanf("%d", &x);
    while(x>=1)
   {
    x/=2;
    count++;

   }   
    printf("The number can be divided by 2, %d times until it is less than 1.", count);
}*/

/*#include <stdio.h>
int main(void)
{
    int x, i = 1, n=1;
    scanf("%d", &x);   //printing multiples of 7 until it is greater than the number entered
    while (n<x)
    {
        n = 7*i;
        i++;
    }
    printf("%d", n);

}*/


/*#include <stdio.h>
int main(void)
{
    int x,n=1,count=0;
    scanf("%d", &x);
    for (n=1; n<=x; n++){  //count the number of divisors of a number
        if (x%n==0)
        {
            count++;
        }
    }
    printf("The number of divisors is: %d", count);
}*/

/*#include <stdio.h>
int main(void)
{
    int x,n=1,count=0;
    scanf("%d", &x);
    for (n=1; n<=x; n++){ //check if prime number or not
        if (x%n==0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("prime");
    }
    else 
    {
    printf("not prime");
    }
}*/


/*#include <stdio.h>
int main(void)
{
    int x,n=1,sum=0;
    scanf("%d", &x);
    for (n=1; n<=x; n++){  //sum of factors
        if (x%n==0)
        {
            sum+=n;
        }
    }
    printf("The sum of factors is: %d", sum);
}*/


/*#include <stdio.h>
void main()
{
 int a,b,i = 1;
 scanf("%d ",&a);
 scanf("%d",&b);
 int max = 1 ;
 while(i<a)
  {                                //gcd of two numbers
    if(a%i == 0 && b%i == 0)
     {
       if (max<i)
         max = i;
     }
   i++;
  }
  printf("%d", max);
}*/


/*#include <stdio.h>
void main()

{
  int x = 0, count,n,sum = 0;
  scanf("%d", &n);
  while (count < n)
   {
    sum = sum + x;   //fibonacci series sum
    x++;
    count++;
   printf("%d\n", sum);
   }
}*/


