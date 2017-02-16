
#include <stdlib.h>
#include <unistd.h>

void    ft_print(char *str)
{
    while(*str != '\0')
    {
        write(1, &(*str), 1);
        str++;
    }
}

size_t		ft_strlen(char *str)
{
	int cont;

	cont = 0;
	while (*str)
	{
		str++;
		cont++;
	}
	return (cont);
}

void    rev_wstr(char *str)
{
    size_t  len;
    char    *rev;
    int     i;
    int     j;
    int     p;
    
    len = ft_strlen(str);
    i = 0;
    p = 0;
    rev = (char*)malloc(sizeof(char) * len + 1);
    rev[len + 1] = '\0';
    len--;
    while(str[i] != '\0')
    {
        if(str[i + 1] == ' ' || str[i + 1] == '\0')
        {
            j = len - i;
            if(!(j - 1 < 0))
                rev[j - 1] = ' ';
            while(p <= i)
            {
                rev[j] = str[p];
                p++;
                j++;
            }
            p++;
        }
        i++;
    }
    
    ft_print(rev);
    free(rev);
}

int     main(int argc, char **argv)
{
    if(argc == 2)
        rev_wstr(argv[1]);
    write(1, "\n", 1);
    return(0);
}