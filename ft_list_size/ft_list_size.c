
#include "ft_list_size.h"

int ft_list_size(t_list *begin_list)
{
    int i;
    t_list *tmp;
    
    tmp = begin_list;
    i = 0;
    while(tmp)
    {
        tmp = tmp->next;
        i++;
    }
    return (i);
}

t_list *ft_create_list(t_list *begin_list)
{
    t_list *tmp;
    
    tmp = NULL;
    if (begin_list->next == NULL)
    {
        tmp = (t_list*)malloc(sizeof(t_list));
        begin_list->next = tmp;
    }
    else
    {
        tmp = begin_list;
        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = (t_list*)malloc(sizeof(t_list));
    }
    return (begin_list);
}

int main(void)
{
    t_list *begin_list;
    int i;
    
    begin_list = (t_list*)malloc(sizeof(t_list));
    begin_list->next = NULL;
    i = 4;
    while (i-- > 0)
    {
        begin_list = ft_create_list(begin_list);
    }
    printf("List size ==>> %d\n", ft_list_size(begin_list));
    return (0);
}