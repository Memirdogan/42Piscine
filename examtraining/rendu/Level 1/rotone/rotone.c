#include <unistd.h>
int main(int ac,char **av)
{
    int i;
    i=0;
    if(ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] == 'z') // eğer karakterimiz küçük z ise a oluyo
                av[1][i] = 'a';
            else if (av[1][i] == 'Z')//eğer karakterimiz büyük Z ise A oluyo
                av[1][i] = 'A';
            else if ((av[1][i] >= 'a' && av[1][i] < 'z') || (av[1][i] >= 'A' && av[1][i] < 'Z'))
                av[1][i] = av[1][i] + 1;//karakterimiz z hariç alfabedeyse 1 parametre artıyor
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1,"\n",1);
}