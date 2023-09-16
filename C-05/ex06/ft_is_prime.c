int ft_is_prime(int nb)
{
    int i;
    
    i=2;
    if(nb < 2)//ikiden küçük asal sayı olmazz
        return (0);
    while (nb > i)//i yi sayımıza kadar arttırıyoruz
    {
        if (nb % i == 0)//sayımız bulunduğu indexde bölümünden kalan 0 ise başka sayılara bölündüğü için asal değil
        {
            return (0);
        }
        i++;
    }
    return (1);
}