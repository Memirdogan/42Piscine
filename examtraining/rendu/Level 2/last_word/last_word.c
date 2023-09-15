#include <unistd.h>
int  main(int ac, char **av)
{
    int i;
    if (ac == 2)
    {
        i = 0;
        while (av[1][i])//dizinin sonuna gitmek için uzunluk ölçtük
            i++;
        i--;
        while(av[1][i] == ' ' || av[1][i] == '\t')//sonda tab boşluk varsa geri gel dedik
            i--;
        while((av[1][i] != ' ' && av[1][i] != '\t') && i >= 0)//son harfden geri gelmeye başla boşluk görene kadar
            i--;
        i++;
        while(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
            write(1,&av[1][i++],1);
    }
    write(1,"\n",1);
}