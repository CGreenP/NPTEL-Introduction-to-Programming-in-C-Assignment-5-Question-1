#include <stdio.h>
#include <stdlib.h>
int a=0;
void printCollatz(int n)
{
    if (n != 1)
    {
        a++;
        if ((n%2)!= 0)
        {
            n = 3*n + 1;
        }
        else
        {
            n = n/2;
        }
        printCollatz(n);
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    printCollatz(b);
    printf("%d",a);
    return 0;
}
