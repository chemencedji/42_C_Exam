#include "do_op.h"

int     ft_calc(int a, int b, char *c)
{
    if(*c == '+')
        return(a + b);
    else if(*c == '-')
        return(a - b);
    else if(*c == '*')
        return(a * b);
    else if(*c == '/')
        return(a / b);
    else if(*c == '%')
        return(a % b);
    return(0);
}

int     main(int argc, char **argv)
{
    if(argc == 4)
    {
        printf("%d\n", ft_calc(atoi(argv[1]), atoi(argv[3]), argv[2]));
    }
    else
        write(1, "\n", 1);
    return (0);
}