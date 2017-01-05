
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
        i++
    }
    return (i);
}

int main(void)
{
    t_list *begin_list;
    int i;
    
    begin_list = (t_list*)malloc(sizeof(t_list));
    i = 5;
    while (i-- > 0)
    {
        ft_create_list
    }
    printf("List size ==>> %d\n", ft_list_size(begin_list));
    return (0);
}