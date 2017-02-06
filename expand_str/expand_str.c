
#include <unistd.h>

int main(int argc, char** argv)
{
    char *str;
    int i;
    
    i = 0;
    if (argc == 2)
    {
        str = argv[1];
        if(*str == ' ' || *str == '\t')
                while(str[i] == ' ' || str[i] == '\t')
                    i++;
        while(str[i] != '\0')
        {
            if(str[i] == ' ' || str[i] == '\t')
            {
                while((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
                    i++;
                if((str[i] != ' ' || str[i] != '\t') && str[i] != '\0')
                    write(1, "   ", 3);
            }
            else
            {
            write(1, &str[i], 1);
            i++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}