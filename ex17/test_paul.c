<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeantet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:53:21 by pjeantet          #+#    #+#             */
/*   Updated: 2017/08/11 10:59:32 by pjeantet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_max(int *tab, int length)
{
	int i;
	int m;

	m = 0;
	i = 0;
	if (lenght <= 0)
		return (0);
	while (i < length)
	{
		if (tab[i] > tab[m])
			m = i;
		i++;
	}
	return (tab[m]);
}

int main()
{
	int tab[5];
	int length;

	length = 5;
	tab[4] = 129;
	tab[3] = 3;
	tab[2] = -2;
	tab[1] = 1290;
	tab[0] = 0;
	printf("%i", ft_max(tab, length));
	return(0);
=======
int		ft_max(int *tab, int length);

void	ft_print_tab(int *tab, int length)
{
	int idx;

	idx = 0;
	while (idx < length)
		printf("%d ", tab[idx++]);
}

void	ft_test(int *tab, int length, int result)
{
	int max = ft_max(tab, length);
	printf("Testing ");
	ft_print_tab(tab, length);
	if (max == result)
		printf("[OK]\n");
	else
		printf("[ERR] your value: %d, real value: %d\n", max, result);
}

int main()
{
	int tab[4] = {10, 2, 5, 14};
	ft_test(tab, 4, 14);
	int tab2[10] = {10, 100, 12, 2, 1, 5, 14, 5, 9, 11};
	ft_test(tab2, 10, 100);
	int tab3[20] = {0, -1, 10, 40, 100, 12, 2, 1, 5, 14, 5, 9, 11, 1000, 1234, 45, 70, 89, 10, 1};
	ft_test(tab3, 20, 1234);
>>>>>>> 5060a69de271d51a0f1572e00ec082722e3dcca1
}
