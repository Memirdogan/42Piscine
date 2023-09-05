void    ft_rev_int_tab(int *tab, int size)
{
    int tmp; //temporary yani gecici degiskenim
    int i;

    while (i < size -1)
    {
        tmp = tab[i];
        tab[i] = tab[size-1];
        tab[size-1] = tmp;

        size--;
        i++;
    }
}
