
#include <unistd.h>

int     ft_strlen(char *str)
{
    int i;
    i = 0;
    
    while (str[i] != '\0')
        i++;
    return (i);
}

int     main(int argc, char **argv)
{
    int i;
    char *tmp;
    
    if (argc == 2)
    {
        tmp = argv[1];
        i = ft_strlen(tmp);
        
        while(--i >= 0)
            write(1, &tmp[i], 1);
    }
    write(1, "\n", 1);
    return (0);
}