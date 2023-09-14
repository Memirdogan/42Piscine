#include <unistd.h>
int main(int ac,char **av)
{
    int i;
    i=0;
    if(ac == 2)
    {
        while (av[1][i]) //bu döngüde karakterleri 13 ileri veya geri alıyoruz
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'm')
                av[1][i] = av[1][i] + 13;
            else if (av[1][i] >= 'n' && av[1][i] <= 'z')    
                av[1][i] = av[1][i] - 13;
            else if (av[1][i] >= 'A' && av[1][i] <= 'M')
                av[1][i] = av[1][i] + 13;
            else if (av[1][i] >= 'N' && av[1][i] <= 'Z')    
                av[1][i] = av[1][i] - 13;
            i++;
        }
        i=0;
        while (av[1][i]) // i yi 0 a eşitleyip tekrardan döngü ile bastırıyoruz
        {
            write(1,&av[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
}
