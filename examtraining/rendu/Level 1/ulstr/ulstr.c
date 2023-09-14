#include <unistd.h> //büyük harfi küçük küçüğü ise büyük istiyo
int main(int ac,char **av)
{
    int i;
    i=0;
    if(ac == 2)// iki parametremiz varsa giriyoruz
    {
        while (av[1][i])
        {
            if(av[1][i] >= 'a' && av[1][i] <= 'z')//küçükse büyüt
                av[1][i] = av[1][i] - 32;
            else if(av[1][i] >= 'A' && av[1][i] <= 'Z')//büyükse küçült
                av[1][i] = av[1][i] + 32;

            write(1,&av[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
}