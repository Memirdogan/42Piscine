#include <unistd.h>
int main(int ac,char **av)
{
    if(ac !=2)
        write(1,"z",1);
    else
    {
        int i;
        i=0;
        while(av[1][i])
        {
            if (av[1][i] != 'z')
            {
                i++;
            }
            else
                break;
        }
        write(1,"z",1);
    }
    write(1,"\n",1);
}
/*
int main(void)
{
    write(1,"z\n",2);
    return (0);
}
*/