
#ifndef FT_LIST_SIZE
# define FT_LIST_SIZE
# include <stdlib.h>
# include <stdio.h>

typedef struct  s_list
{
    void            *data;
    struct s_list   *next;
}               t_list;

int     ft_list_size(t_list *begin_list);

#endif