int max(int* tab, unsigned int len)
{
    int max; //max ı tutucağımız değişken
    int i; //sayacımız

    if (len == 0)//eğer istenilen uzunluk 0 sa 0 dödnrü
        return(0);
    
    i=0;
    max = tab[i];//maxa ilk karakteri ata

    while (i < len)//uzunluğun izin verdiği sürece devam et
    {
        if (tab[i] > max)//eğer indeximiz max değerden büyükse 
        {
            max = tab[i];//artık max değerimiz indeximizdeki değer olsun
        }
        i++;
    }
    return(max);
}