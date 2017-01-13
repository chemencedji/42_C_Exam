
#include <unistd.h>

int     main(void)
{
    char a = 'a';
    int f = 0;
    
    while(a <= 'Z' || a <= 'z')
    {
        if (a >= 97 && a <= 122)
        {
            write(1, &a, 1);
            a -= 31;
        }
        else
        {
            write(1, &a, 1);
            a += 33;
        }
    }
    write(1, "\n", 1);
    return (0);
}