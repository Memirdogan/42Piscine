//program 3 ün katı ise fizz 5 in katı ise buzz ikisinin birden katı ise fizzbuzz istiyor
#include <unistd.h>

void ft_putnbr(int c)//parametreyi yazdırmak için fonksiyon
{
    int tmp;//geçici değişken

    if (c > 9)//çift haneli ise döndürüyoruz
        ft_putnbr(c / 10);

    tmp = (c % 10 + '0');//döndürdüğümüz sayıyı ve 9dan küçük sayıları atayıp bastırıyoruz
    write(1,&tmp,1);
}

int main(void)
{
    int i;
    i=0;
    while (i <= 100)//0 dan 100 e kadar döncek
    {
        if ((i % 3 == 0) && (i % 5 == 0))//ikisinin birden katıysa
            write(1,"fizzbuzz",8);
        else if (i % 3 == 0)//üçün katıysa
            write(1,"fizz",4);
        else if (i % 5 == 0)//beşin katıysa
            write(1,"buzz",4);
        else//hiçbir kat değilse direkt gönderiyoruz
            ft_putnbr(i);
        write(1,"\n",1);
        i++;
    }
}