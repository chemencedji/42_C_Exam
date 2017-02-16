
#include "ft_list.h"
//#include <stdlib.h>
//#include <stdio.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list_ptr;
    
    list_ptr = begin_list;
    while(list_ptr)
    {
        (*f)(list_ptr->data);
        list_ptr = list_ptr->next;
    }
}

/*void    ft_func(void *data)
{
    *((int *)data) = 5;
}

int     main(void)
{
    t_list *unu;
    t_list *doi;
    t_list *trei;
   int a =1, b=2, c=3; 
    unu = (t_list*)malloc(sizeof(t_list));
    doi = (t_list*)malloc(sizeof(t_list));
    trei = (t_list*)malloc(sizeof(t_list));
    
    unu->next = doi;
    doi->next = trei;
    trei->next = NULL;
    
    unu->data = (void*)malloc(sizeof(int));
    doi->data = (void*)malloc(sizeof(int));
    trei->data = (void*)malloc(sizeof(int));
    
    unu->data = &a;
    doi->data = &b;
    trei->data = &c;
    
    ft_list_foreach(unu, &ft_func);
    printf("%d\n", *((int*)unu->data));
    printf("%d\n", *((int*)doi->data));
    printf("%d\n", *((int*)trei->data));
}*/