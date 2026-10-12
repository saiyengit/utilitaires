#include <stdio.h>

/* affiche un tableau de strings termine par NULL, les [ ] montrent les "" et les espaces */
void	print_tab(char **tab)
{
	int	i;

	if (tab == NULL)
	{
		printf("NULL\n");
		return ;
	}
	i = 0;
	while (tab[i])
		printf("[%s]\n", tab[i++]);
	printf("(fin)\n");
}
