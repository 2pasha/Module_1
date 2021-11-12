#include <stdio.h>
#include <cs50.h>

int main()
{
    int m;
    do
    {
        m = get_int("Enter number of month: ");
    }
    while (m < 1 || m > 12);

    switch(m)
    {
        case 1:
            printf ("January has 30 days\n");
            break;
        case 2:
            printf ("February has 28 days\n");
            break;
        case 3:
            printf ("March has 31 days\n");
            break;
        case 4:
            printf ("April has 30 days\n");
            break;
        case 5:
            printf ("May has 31 days\n");
            break;
        case 6:
            printf ("June has 30 days\n");
            break;
        case 7:
            printf("July has 31 days\n");
            break;
        case 8:
            printf("August has 31 days\n");
            break;
        case 9:
            printf("September has 30 days\n");
            break;
        case 10:
            printf("Oktober has 31 days\n");
            break;
        case 11:
            printf("Nowember has 30 days\n");
            break;
        case 12:
            printf("December has 31 days\n");
            break;
    }
}
