
int	ft_sqrt(int nb)
{
	int	sq;

	sq = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (sq * sq < nb)
		sq++;
	if (sq * sq == nb)
		return (sq);
	else
		return (0);
}
