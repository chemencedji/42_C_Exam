
#include <stdlib.h>
#include <stdio.h>

int	ft_cnt_parts(char *s)
{
	int		cnt;
	int		in_substring;

	in_substring = 0;
	cnt = 0;
	while (*s != '\0')
	{
		if (in_substring == 1 && (*s == ' ' || *s == '\t'))
			in_substring = 0;
		if (in_substring == 0 && (*s != ' ' || *s != '\t'))
		{
			in_substring = 1;
			cnt++;
		}
		s++;
	}
	return (cnt);
}

size_t		ft_strlen(char *str)
{
	int cont;

	cont = 0;
	while (*str)
	{
		str++;
		cont++;
	}
	return (cont);
}

char	*ft_strsub(char *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	if ((result = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		result[i] = s[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

int	ft_wlen(char *s)
{
	int		len;

	len = 0;
	while (*s != ' ' && *s != '\t' && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_split(char *s)
{
	char	**t;
	int		nb_word;
	int		index;

	if (s == NULL)
		return (NULL);
	index = 0;
	nb_word = ft_cnt_parts(s);
	t = (char **)malloc(sizeof(*t) * (nb_word + 1));
	if (t == NULL)
		return (NULL);
	while (nb_word--)
	{
		while ((*s == ' ' || *s == '\t') && *s != '\0')
			s++;
		t[index] = ft_strsub(s, 0, ft_wlen(s));
		if (t[index] == NULL)
			return (NULL);
		s = s + ft_wlen(s);
		index++;
	}
	t[index] = NULL;
	return (t);
}

int     main(int argc, char **argv)
{
    char **list;
    
    if(argc > 1)
    {
        list = ft_split(argv[1]);
        printf("%s\n", list[0]);
        printf("%s\n", list[1]);
        printf("%s\n", list[2]);
        printf("%s\n", list[3]);
    }
    return (0);
}





