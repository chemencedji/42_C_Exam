
void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i;
		while(j < size)
		{
			if (tab[i] > tab[j])
			{
				tab[i] = tab[i] + tab[j];
				tab[j] = tab[i] - tab[j];
				tab[i] = tab[i] - tab[j];
 			}
 			j++;
		}
		i++;
	}
}