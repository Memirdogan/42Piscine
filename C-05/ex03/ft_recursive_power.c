int ft_recursive_power(int nb, int power)
{
	int	holder;

    holder = nb;
    if (holder > holder * nb)//eğer çarpıldıkça büyüyorsa sonsuz döngü olur
        return(0);
    else if (power > 1)
        return(nb * ft_recursive_power(nb, power - 1));
    else if (power == 0)
        return(1);
    else if (power < 0)
        return(0);
    else
        return(nb);//üssün bir olamsı durumu
}