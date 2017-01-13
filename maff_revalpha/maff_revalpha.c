
#include <unistd.h>

int     main(void)
{
    char a = 'z';
    
    while(a >= 'A' || a >= 'a')
    {
        if (a >= 97 && a <= 122)
        {
            write(1, &a, 1);
            a -= 33;
        }
        else if(a >= 65 && a <= 90)
        {
            write(1, &a, 1);
            a += 31;
        }
        if (a == 'A' || a == 'a')
        {
            write(1, "A", 1);
            break ;
        }
    }
    write(1, "\n", 1);
    return (0);
}