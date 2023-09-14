#include <unistd.h>

int ft_alphalen(char a)//gönderdiğimiz karakterin kaçıncı sırada oldupunu buluyoruz
{
    int count;
 
    if(a >= 'a' && a <= 'z')
        count = a - 'a' + 1;
    else if (a >= 'A' && a <= 'Z')
        count = a - 'A' + 1;
    else
        count  = 1;
    return(count);
}

int main(int ac,char **av)
{
    if(ac == 2)
    {
        int count;
        while (*av[1])
        {
            count = ft_alphalen(*av[1]);
            while (count--)//kaçıncı sıradaysa o kadar bastırıyoruz
            {
                write(1,av[1],1);
            }
            av[1]++;
        }
    }
    write(1,"\n",1);
}