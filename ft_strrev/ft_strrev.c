
#include <stdio.h>

char    *ft_strrev(char *str)
{
    char c;
    int i;
    int p;
    int l;
    
    i = 0;
    if(*str == '\0')
        return NULL;
    while(str[i] != '\0')
        i++;
    if(i > 0)
    {
        p = --i;
        i /= 2;
        l = 0;
        while(i-- >= 0)
        {
            c = str[l];
            str[l++] = str[p];
            str[p--] = c;
        }
    }
    return(str);
}

int     main(int argc, char **argv)
{
    char *str;
    
    str = NULL;
    if(argc == 2)
        str = ft_strrev(argv[1]);
    printf("%s\n", str);
    return (0);
}