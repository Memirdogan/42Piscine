#include <unistd.h>
int main(int ac,char **av)
{
    int i;
    if (ac == 2)
    {
        i=0;
        while (av[1][i] != 'a')
        {
            i++;
        }
        write(1,"a",1);
        write(1,"\n",1);
    }
    else
    {
        write(1,"a",1);
        write(1,"\n",1);
    }
}
