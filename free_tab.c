#include <stdlib.h>

/* libere un tableau de strings termine par NULL : chaque string, puis le tableau */
void	free_tab(char **tab)
{
	int	i;

	if (tab == NULL)
		return ;
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
