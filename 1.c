#include <cs50.h>
#include <stdio.h>

int main()
{
    int n, sum=0, k=0;
    do 
    {
        n = get_int("Enter K: ");
    } 
    while (n <= 1);
    
    while (sum <= n)
    {
        ++k;
        sum += 3;
    }
    printf ("K: %i\n", k);
    printf ("Sum: %i\n", sum);
}
