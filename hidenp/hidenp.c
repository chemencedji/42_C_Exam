
#include <unistd.h>

void    ft_print(int i)
{
    if(i == 1)
        write(1, "1", 1);
    else
        write(1, "0", 1);
}

void    ft_hidenp(char *a, char *b)
{
    int i;
    int t;
    int flag;
    
    i = 0;
    t = 0;
    while(b[i] != '\0')
    {
        flag = 0;
        if(b[i] == a[t])
            t++;
        i++;
    }
    if(a[t] == '\0')
        ft_print(1);
    else
        ft_print(0);
}

int     main(int argc, char **argv)
{
    if(argc == 3)
    {
        ft_hidenp(argv[1], argv[2]);
    }
    write(1, "\n", 1);
    return(0);
}