#include <stdio.h>
 int primeno(int, int);
 int main()
{
    int num, check;
    printf("Enter a number: ");
    scanf("%d", &num);
    check = primeno(num, num / 2);
    if (check == 1)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is composite number.\n", num);
    }
    return 0;
}
 
int primeno(int a, int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
       if (a % x == 0)
       {
         return 0;
       }
       else
       {
         return primeno(a, x - 1);
       }       
    }
}
