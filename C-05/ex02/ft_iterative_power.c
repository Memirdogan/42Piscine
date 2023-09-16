int	ft_iterative_power(int nb, int power)
{
	int	holder;

	holder = nb;
	while (power > 1) 
	{
		holder = holder * nb; 
		power--; 
	}
    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    return (holder);
}
/*int	main(void)
{
	printf("%i", ft_iterative_power(3, 4));
}*/
