
#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *list_ptr;
    t_list *rmv;
    
    list_ptr = *begin_list;
    rmv = NULL;
    while(list_ptr)
    {
        rmv = list_ptr->next;
        if(rmv)
        {
            if((*cmp)(data_ref, rmv->data) == 0)
            {
                list_ptr->next = rmv->next;
                free(rmv);
            }
            else
                list_ptr = list_ptr->next;
        }
        else
        {
            if((*cmp)(data_ref, list_ptr->data) == 0)
            {
                rmv = list_ptr;
                free(rmv);
                list_ptr = NULL;
            }
            else
                list_ptr = list_ptr->next;
        }
    }
    list_ptr = *begin_list;
    if(list_ptr != NULL)
        if((*cmp)(data_ref, list_ptr->data) == 0)
        {
            rmv = list_ptr;
            list_ptr = list_ptr->next;
            free(rmv);
        }
    while(list_ptr)
    {
        printf("%d\t", *((int*)list_ptr->data));
        list_ptr = list_ptr->next;
    }
}

int     func(void *data_ref, void *data)
{
    if(*((int*)data_ref) == *((int*)data))
        return (0);
    else
        return (1);
}

int     main(void)
{
    t_list **begin_list;
    t_list *unu;
    t_list *doi;
    t_list *trei;
    t_list *ptr;
   
    int a = 3, b = 2, c = 2;
    int number = 2;
    void *num = &number;
    
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
    
    ptr = unu;
    while(ptr)
    {
        printf("%d\t", *((int*)ptr->data));
        ptr = ptr->next;
    }
    printf("\n");
    begin_list = &unu;
    ft_list_remove_if(begin_list, num, &func);
    printf("\n");
    return(0);
}