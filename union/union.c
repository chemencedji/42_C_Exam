#include <unistd.h>

void    ft_print(char *str)
{
    while(*str != '\0')
    {
        write(1, &(*str), 1);
        str++;
    }
}

void    ft_union(char *a, char *b)
{
    int i;
    int t;
    int p;
    char str[100];
    
    i = 0;
    t = 0;
    p = 0;
    str[p] = '\0';
    while(a[i] != '\0')
    {
        if(str[0] == '\0')
        {
            str[p] = a[i];
            p++;
            str[p] = '\0';
        }
        else
        {
            p = 0;
            while(str[p] != '\0' && str[p] != a[i])
                p++;
            if(str[p] == '\0')
            {
                str[p] = a[i];
                p++;
                str[p] = '\0';
            }
        }
        i++;
    }
    while(b[t] != '\0')
    {
        if(str[0] == '\0')
        {
            str[p] = b[t];
            p++;
            str[p] = '\0';
        }
        else
        {
            p = 0;
            while(str[p] != '\0' && str[p] != b[t])
                p++;
            if(str[p] == '\0')
            {
                str[p] = b[t];
                p++;
                str[p] = '\0';
            }
        }
        t++;
    }
    if(str[0] != '\0')
        ft_print(str);
}

int     main(int argc, char **argv)
{
    if(argc == 3)
    {
        ft_union(argv[1], argv[2]);
    }
    write(1, "\n", 1);
    return(0);
}