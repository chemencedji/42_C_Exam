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

static int  ft_check2(char **str, int i, char cr, int t)
{
    int a = 0;
    int b = 0;
    int c = 0;

    if(t > 0)
        t--;
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
        if((*str)[i] == cr)
        {
            if (a == 0 && b == 0 && c == 0)
                break ;
            else if (t == 0)
                break ;
            else
                t--;
        }
        i--;
    }
    if (a == 0 && b == 0 && c == 0)
        return (0);
    else
        return (1);
}

static void ft_check(char **str)
{

    int i = -1;
    int a = 0;
    int at = 0;
    int b = 0;
    int bt = 0;
    int c = 0;
    int ct = 0;

    while ((*str)[++i] != '\0')
    {
        if ((*str)[i] == 40)
        {
            a++;
            at++;
        }
        if ((*str)[i] == 41)
        {
            a--;
            if ( 1 == (ft_check2(str, i, '(', at)))
                {
                    ft_print(0);
                    return ;
                }
        }
        if ((*str)[i] == 91)
        {
            b++;
            bt++;
        }
        if ((*str)[i] == 93)
        {
            b--;
            if ( 1 == (ft_check2(str, i, '[', bt)))
            {   
                ft_print(0);
                return ;
            }
        }
        if ((*str)[i] == 123)
        {
            c++;
            ct++;
        }
        if ((*str)[i] == 125)
        {
            c--;
            if ( 1 == (ft_check2(str, i, '{', ct)))
            {   
                ft_print(0);
                return ;
            }
        }
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