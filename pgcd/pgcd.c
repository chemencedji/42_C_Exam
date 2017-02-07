
#include <stdio.h>
#include <stdlib.h>

void    ft_pgcd(int a, int b)
{
    int d;
    int i;
    int t;
    
    d = 0;
    i = 1;
    if(a > 0 && b > 0)
    {
        if(a > b)
            t = b;
        else
            t = a;
        while(i <= t)
        {
            if(a % i == 0 && b % i == 0)
                d = i;
            i++;
        }
        printf("%d\n", d);
    }
}

int     main(int argc, char **argv)
{
    if(argc == 3)
        ft_pgcd(atoi(argv[1]), atoi(argv[2]));
    else
        write(1, "\n", 1);
    return(0);
}