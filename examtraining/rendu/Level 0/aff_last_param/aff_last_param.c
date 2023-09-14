#include <unistd.h>
int main(int ac,char **av)
{
    int i;
    int a;
    i=0;
    a=ac - 1;//son parametremize ulaşmak için a yı sayaç olarak belirleeyip içine argüman sayısı -1 atıyoruz çünki av 0dan saymaya başlar
    if(ac >= 2)
    {
        while(av[a][i])
        {
            write(1,&av[a][i],1);
            i++;
        }
    }
    write(1,"\n",1);
}