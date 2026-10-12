#include <stdio.h>

/* affiche un tableau de size ints : {1, 2, 3} */
void	print_int_tab(int *tab, int size)
{
	int	i;

	if (tab == NULL)
	{
		printf("NULL\n");
		return ;
	}
	printf("{");
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
	printf("}\n");
}

/* affiche un int ** de rows lignes, chacune de cols ints (ex : mult_table) */
void	print_int_tab2d(int **tab, int rows, int cols)
{
	int	i;

	if (tab == NULL)
	{
		printf("NULL\n");
		return ;
	}
	i = 0;
	while (i < rows)
	{
		print_int_tab(tab[i], cols);
		i++;
	}
}
