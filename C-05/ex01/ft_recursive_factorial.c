int	ft_recursive_factorial(int nb)
{
	if (nb >= 2)// 0!=1 && 1!=1 o yüzden else
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb < 0)
		return (0);
	else
		return (1);
}