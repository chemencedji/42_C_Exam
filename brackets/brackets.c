#include "brackets.h"

static void ft_print(int a)
{
    char ok[] = "OK\n";
    char er[] = "Error\n";

    if (a == 1)
        write(1, &ok, 3);
    else
        write(1, &er, 6);

}

static int  ft_check2(char **str, int i, char cr)
{
    int a = 0;
    int b = 0;
    int c = 0;
    while (i >= 0)
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
        if ((*str)[i] == 125)
            c--;
        if ((*str)[i] == cr)
            break ;
        i--;
    }
    if (a == 0 && b == 0 && c == 0)
        return (0);
    else
        return (1);
}

static void ft_check(char **str)
{

    int i = 0;
    int a = 0;
    int b = 0;
    int c = 0;

    while ((*str)[i] != '\0')
    {
        if ((*str)[i] == '(')
            a++;
        if ((*str)[i] == 41)
        {
            a--;
            if ( 1 == (ft_check2(str, i, '(')))
                {
                    ft_print(0);
                    return ;
                }
        }
        if ((*str)[i] == '[')
            b++;
        if ((*str)[i] == 93)
        {
            b--;
            if ( 1 == (ft_check2(str, i, '[')))
            {   
                ft_print(0);
                return ;
            }
        }
        if ((*str)[i] == '{')
            c++;
        if ((*str)[i] == 125)
        {
            c--;
            if ( 1 == (ft_check2(str, i, '{')))
            {   
                ft_print(0);
                return ;
            }
        }
        i++;
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
    if (j == 1)
        write(1, "\n", 1);
    return (1);
}