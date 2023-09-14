#include <unistd.h>//dizinin ilk kelimesini bastırma programı
int main(int ac,char **av)
{
    int i;
    i=0;
    if(ac < 2){ 
    }
    else
    {
        while (av[1][i])
        {
            write(1,&av[1][i],1);
            i++;
        }
        
    }
    write(1,"\n",1);
}