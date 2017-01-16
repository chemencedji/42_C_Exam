
#include <unistd.h>

int     main(int argc, char** argv)
{
    char *str;
    int i;
    int v;
    
    if (argc == 2)
    {
        i = 0;
        v = 0;
        str = argv[1];
        
        while(str[i] != '\0')
        {
            if(str[i] >= 65 && str[i] <= 77)
            {
                v = 77 - str[i];
                str[i] = 78 + v;
                write(1, &str[i], 1);
            }
            else if (str[i] >= 97 && str[i] <= 110)
            {
                v = 109 - str[i];
                str[i] = 110 + v;
                write(1, &str[i], 1);
            }
            else if (str[i] >= 79 && str[i] <= 90)
            {
                v = 90 - str[i];
                str[i] = 78 - v;
                write(1, &str[i], 1);
            }
            else if (str[i] >= 110 && str[i] <= 122)
            {
                v = 122 - str[i];
                str[i] = 97 + v;
                write(1, &str[i], 1);
            }
            else if (str[i] >= 0 || str[i] <= 126)
                write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}