int ft_sqrt(int nb)
{
    int i;

    i=1;
    if(nb <= 0)// - değerin karesi nası olsun
        return(0);
    while (i * i <= nb)//gönderdiğimiz sayıyı geçmemesi lazım
    {
        if(i * i == nb)//i * i sayımıza eşitse tamköktür
            return (i);
        if(i >= 46341)//bu sayıyı aşmaması lazım çünki çarpımı intin max değerini geçer
            return (0);
        i++;
    }
    return (0);
}