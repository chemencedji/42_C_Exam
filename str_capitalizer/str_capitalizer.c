
#include <unistd.h>

void    ft_capitalizer(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        if(str[i - 1] == ' ' || str[i - 1] == '\t')
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        if(str[0] >= 'a' && str[0] <= 'z')
            str[0] = str[0] - 32;
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int     main(int argc, char **argv)
{
    int j;
    
    j = 1;
    if(argc > 1)
        while(argv[j])
        {
            ft_capitalizer(argv[j]);
            j++;
        }
    else
        write(1, "\n", 1);
    return(0);
}