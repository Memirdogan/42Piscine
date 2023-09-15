int is_power_of_2(unsigned int n)
{
    if (n == 0;)
        return (0);
    else
        return((n & (-n)) == n ? 1 ; 0);
        //n ve -n i binary olarak karşılaştır
        //sonuc n ile aynıysa 1 döndür
        //değilse 0 döndür
}