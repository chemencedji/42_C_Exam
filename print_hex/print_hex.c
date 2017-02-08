
#include <stdio.h>

void    ft_print(char *str)
{
    while(*str != '\0')
    {
        write(1, &(*str), 1);
        str++;
    }
}

void    ft_print_hex(unsigned int num)
{
    char c[20];
    unsigned int test;
    int i;
    unsigned int mod;
    
    c[0] = 0;
    if(num >= 0 && num <= 9)
    {
        c[0] = num + 48;
        write(1, &c[0], 1);
    }
    if(num > 9)
    {
        test = num;
        i = -1;
        mod = 0;
        while(test != 0)
        {
            test /= 16;
            i++;
        }
        c[i + 1] = '\0';
        while(i >= 0)
        {
            mod = num % 16;
            if(mod > 9)
            {
                if(mod == 10)
                    c[i] = 'a';
                if(mod == 11)
                    c[i] = 'b';
                if(mod == 12)
                    c[i] = 'c';
                if(mod == 13)
                    c[i] = 'd';
                if(mod == 14)
                    c[i] = 'e';
                if(mod == 15)
                    c[i] = 'f';
            }
            if (mod >= 1 && mod <= 9)
                c[i] = mod + 48;
            i--;
            num /= 16;
        }
        ft_print(c);
    }
}

int		ft_atoi(const char *str)
{
	int	nb;
	int	i;
	int	neg;

	nb = 0;
	i = 0;
	neg = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ' || str[i] == '\f'
			|| str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nb *= 10;
		nb += (int)str[i] - 48;
		i++;
	}
	return (nb * neg);
}

int     main(int argc, char **argv)
{
    if(argc == 2)
        ft_print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
    return(0);
}