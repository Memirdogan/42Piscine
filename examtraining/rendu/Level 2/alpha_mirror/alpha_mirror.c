#include <unistd.h>
//soru dizideki karakterlerin alfabedeki zır konumdaki karakterlerle değiştirilmesini istiyor
int main(int ac, char **av)
{
    int i;
    i=0;
    if (ac==2)
    {
        while (av[1][i])
        {
            //küçük harf ise üstteki if büyük harf ise alttaki ife giriyor
            //diziden a çıkararak alfabede hangi konumda olduğunu bulur zden de sonucu çıkararak zıt karakter konumunu bulur
            if (av[1][i] <= 'z' && av[1][i] >= 'a')
                av[1][i] = 'z' - (av[1][i] - 'a');

            else if (av[1][i] <= 'Z' && av[1][i] >= 'A')
                av[1][i] = 'Z' - (av[1][i] - 'A');

            write(1,&av[1][i],1);
            i++;               
        }
    }
    write(1,"\n",1);
}