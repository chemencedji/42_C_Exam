#include <unistd.h>

void    ft_print(char *str)
{
    while(*str != '\0')
    {
        write(1, &(*str), 1);
        str++;
    }
}

void    ft_wdmatch(char *a, char *b)
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
        ft_print(a);
}

int     main(int argc, char **argv)
{
    if(argc == 3)
    {
        ft_wdmatch(argv[1], argv[2]);
    }
    write(1, "\n", 1);
    return(0);
}