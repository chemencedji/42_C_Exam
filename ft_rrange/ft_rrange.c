
#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
    int *tab;
    int i;
    int p;
    
    i = 1;
    tab = NULL;
    if(start == end)
    {
        tab = (int*)malloc(sizeof(int));
        if(tab == NULL)
            return (NULL);
        *tab = start;
        return(tab);
    }
    if(start < end)
    {
        p = end;
        while(p != start)
        {    
            p--;
            i++;
        }
        tab = (int*)malloc(sizeof(int) * i);
        if(tab == NULL)
            return (NULL);
        i = 0;
        while(start != end)
        {
            tab[i++] = end--;
        }
        tab[i] = start;
        return(tab);
    }
    if(end < start)
    {
        p = start;
        while(p != end)
        {    
            p--;
            i++;
        }
        tab = (int*)malloc(sizeof(int) * i);
        i = 0;
        while(end != start)
        {
            tab[i++] = end++;
        }
        tab[i] = start;
        return(tab);
    }
}

int     main(void)
{
    int *tab;
    
    tab = ft_rrange(0, -3);
    printf("%d\n", tab[0]);
    printf("%d\n", tab[1]);
    printf("%d\n", tab[2]);
    printf("%d\n", tab[3]);
    return (0);
}