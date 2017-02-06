
#include <unistd.h>

void    ft_print(char *str)
{
    while(*str != '\0')
    {
        write(1, &(*str), 1);
        str++;
    }
}

void     ft_inter(char *a, char *b)
{
    char str[100];
    int i = 0;
    int t = 0;
    int p = 0;
    
    str[0] = '\0';
    
    while(b[t] != '\0')
    {
        if(b[t] == a[i])
        {
            if(str[0] == '\0' && p == 0)
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
        t++;
    }
    if(a[i] != '\0')
    {
        i++;
        t = 0;
        while(b[t] != a[i])
            t++;
            while(b[t] != '\0')
            {
                if(b[t] == a[i])
                {
                    if(str[0] == '\0' && p == 0)
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
                t++;
            }
    }
    if(p > 0)
        ft_print(str);
}

int     main(int argc, char **argv)
{
    if(argc == 3)
    {
        ft_inter(argv[1], argv[2]);
    }
    write(1, "\n", 1);
    return(0);
}