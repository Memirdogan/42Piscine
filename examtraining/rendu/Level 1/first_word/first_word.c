#include <unistd.h>
int main(int ac,char **av)
{
    int i;
    i=0;

    if(ac == 2)
    {
        while (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\r')
        {//eğer dizimizin başında boşluk vs varsa atlıyoruz
            i++;
        }
        while (av[1][i] != '\0' && av[1][i] != '\t' && av[1][i] != ' ')
        {//karakteri boşluk vs görene kadar yazdırıyoruz
            write(1,&av[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
}