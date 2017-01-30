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

t_list          *ft_creat_list(t_list *begin_list, char c)
{
    t_list  *tmp;
    t_list  *oh;
    
    tmp = begin_list;
    if(begin_list == NULL)
    {
        begin_list = (t_list*)malloc(sizeof(t_list));
        begin_list->c = c;
        begin_list->left = NULL;
        begin_list->right = NULL;
    }
    else
    {
        if(c == '(' || c == '[' || c == '{')
        {
            while(tmp->left != NULL)
                tmp = tmp->left;
            tmp->left = (t_list*)malloc(sizeof(t_list));
            oh = tmp->left;
            oh->c = c;
            oh->left = NULL;
            oh->right = NULL;
        }
        if(c == ')' || c == ']' || c == '}')
        {
            while(tmp->right != NULL)
                tmp = tmp->right;
            tmp->right = (t_list*)malloc(sizeof(t_list));
            oh = tmp->right;
            oh->c = c;
            oh->left = NULL;
            oh->right = NULL;
        }
    }
    return (begin_list);
}

static void     brackets(t_list **begin_list)
{
    t_list *tmp;
    int f = 0;
    
    tmp = *begin_list;
    if(tmp->c == ')' || tmp->c == ']' || tmp->c == '}')
        ft_print(0);
    else
    {
    while(tmp)
    {
        if(tmp->c == '(')
        {   
            if(tmp->right != NULL)
            {
                if(tmp->right->c != ')')
                    f++;
            }
            else
                f++;
        }
        if(tmp->c == '[')
        {   
            if(tmp->right != NULL)
            {
                if(tmp->right->c != ']')
                    f++;
            }
            else
                f++;
        }
        if(tmp->c == '{')
        {   
            if(tmp->right != NULL)
            {
                if(tmp->right->c != '}')
                    f++;
            }
            else
                f++;
        }
        tmp = tmp->left;
    }
    if(f > 0)
        ft_print(0);
    else
        ft_print(1);
    }
    
}

static void     ft_check(char *str)
{
    t_list *begin_list;
    int i;
    int l;
    
    begin_list = NULL;
    i = 0;
    l = 0;
    while(str[i] != '\0')
    {
        if(str[i] == '(' || str[i] == ')' || str[i] == '[' || str[i] == ']' || str[i] == '{' || str[i] == '}')
            begin_list = ft_creat_list(begin_list, str[i]);
        i++;
    }
    if (begin_list != NULL)
    {
       // l = list_size(begin_list);
        brackets(&begin_list);
    }
}

int main(int argc, char **argv)
{
    int i = 0;
    int j = 1;
    
    while (argc > ++i)
        ft_check(argv[j++]);
    if (j == 1)
        write(1, "\n", 1);
    return(0);
}