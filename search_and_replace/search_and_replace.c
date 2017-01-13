
#include <unistd.h>

int     ft_argvlen(char* str1, char* str2)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while(str1[i++] != '\0');
    
    if (i == 2)
        while(str2[j++] != '\0');
    
    if (j == 2)
        return (i + j - 2);
    else
        return (0);
}

int     main(int argc, char** argv)
{
    char *str;
    char a;
    char b;
    int i;
    
    i = 0;
    if (argc == 4)
    {
        str = argv[1];
        i = ft_argvlen(argv[2], argv[3]);
        if (i == 2)
        {
            a = argv[2][0];
            b = argv[3][0];
            i = 0;
            while (str[i] != '\0')
            {
                if(str[i] == a)
                    str[i] = b;
                write(1, &str[i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return(0);
}