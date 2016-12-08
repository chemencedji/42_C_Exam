#include "brackets.h"

static void ft_print(int a)
{
    int i = 0;
    char ok[] = "OK\n";
    char er[] = "Error\n";

    if (a == 1)
        while(ok[i])
            write(1, &ok[i++], 1);
    else
        while(er[i])
            write(1, &er[i++], 1);

}

static void ft_check(char **str)
{

    int i = -1;
    int a = 0;
    int b = 0;
    int c = 0;

    while ((*str)[++i] != '\0')
    {
        if ((*str)[i] == 40)
            a++;
        if ((*str)[i] == 41)
            a--;
        if ((*str)[i] == 91)
            b++;
        if ((*str)[i] == 93)
            b--;
        if ((*str)[i] == 123)
            c++;
        if ((*str)[i] == 124)
            c--;
    }
    if (a == 0 && b == 0 && c == 0)
        ft_print(1);
    else
        ft_print(0);
}

int main(int argc, char **argv)
{
    int i = 0;
    int j = 1;
    
    while (argc > ++i)
        ft_check(&argv[j++]);
    if (j == 0)
        write(1, "\n", 1);
    return (1);
}