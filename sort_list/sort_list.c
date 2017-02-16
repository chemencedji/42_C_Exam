
#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list  *ptr;
    t_list  *temp;
    t_list  *mv1;
    t_list  *mv2;
    int     i;
    int     j;
    
    ptr = lst;
    i = 0;
    while(ptr)
    {
        ptr = ptr->next;
        i++;
    }
    while(i > 0)
    {
        j = i;
        ptr = lst;
        if((*cmp)(ptr->data, ptr->next->data) == 0)
        {
            mv1 = ptr->next;
            lst = mv1;
            ptr->next = mv1->next;
            mv1->next = ptr;
        }
        temp = lst;
        while(--j > 0)
        {
            mv1 = temp->next;
            if(mv1->next != NULL)
            {
                mv2 = temp->next->next;
                if((*cmp)(mv1->data, mv2->data) == 0)
                {
                    temp->next = mv2;
                    mv1->next = mv2->next;
                    mv2->next = mv1;
                }
            }
            temp = temp->next;
        }
        i--;
    }
    return(lst);
}

int ascending(int a, int b)
{
	return (a <= b);
}

int     main(void)
{
    t_list *list;
    t_list *unu;
    t_list *doi;
    t_list *trei;
    t_list *patru;
    t_list *ptr;
    
    unu = (t_list*)malloc(sizeof(t_list));
    doi = (t_list*)malloc(sizeof(t_list));
    trei = (t_list*)malloc(sizeof(t_list));
    patru = (t_list*)malloc(sizeof(t_list));
    
    unu->next = doi;
    doi->next = trei;
    trei->next = patru;
    patru->next = NULL;
    
    unu->data = 20;
    doi->data = 30;
    trei->data = 14;
    patru->data = 102;
    
    ptr = unu;
    while(ptr)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    list = sort_list(unu, &ascending);
    ptr = list;
    while(ptr)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    return(0);
}