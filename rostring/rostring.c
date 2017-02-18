
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void    ft_print(char *str)
{
    while(*str != '\0')
    {
        write(1, &(*str), 1);
        str++;
    }
}

int		ft_strlen(char *str)
{
	int cont;
	int i;

	cont = 0;
	i = 0;
	while (str[i] != '\0')
	{
	    if(str[i] == ' ' || str[i] == '\t')
	    {
	        if(str[i - 1] >= 33 && str[i - 1] <= 126)
	            cont++;
	        while((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
	            i++;
	        if(str[i] == '\0')
	            cont--;
	    }
	    else
	    {
		i++;
		cont++;
	    }
	}
	return (cont);
}

void    rostring(char *str)
{
    int     len;
    char    *ros;
    int     i;
    int     j;
    int     z;
    
    len = ft_strlen(str);
    i = 0;
    z = 0;

    ros = (char*)malloc(sizeof(char) * len + 1);
    ros[len] = '\0';
    len--;
    while((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
	   i++;
    while(str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
    {
        if(str[i + 1] == ' ' || str[i + 1] == '\0' || str[i + 1] == '\t')
        {
            j = len - z;
             if(!(j - 1 < 0))
                ros[j - 1] = ' ';
            z = i - z;
            while(z <= i)
            {
                ros[j] = str[z];
                z++;
                j++;
            }
            i++;
        }
        else
        {
            i++;
            z++;
        }
    }
    z = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ' || str[i] == '\t')
	    {
	        while((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
	            i++;
	        if(z != 0)
	        {
	            ros[z] = ' ';
	            z++;
	        }
	    }
	    else
	    {
	        ros[z] = str[i];
		    i++;
		    z++;
	    }
    }
    ft_print(ros);
    free(ros);
}

int     main(int argc, char **argv)
{
    if(argc >= 2)
        rostring(argv[1]);
    write(1, "\n", 1);
    return(0);
}