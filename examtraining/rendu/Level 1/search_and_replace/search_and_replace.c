#include <unistd.h>
int main(int ac,char **av)
{
    int i;
    i=0;
    if(ac == 4)//3 parametra varsa program çalışıyor
    {
        if((av[3][1] == '\0' && av[2][1] == '\0')) // 2. ve 3. parametrelerimiz tek harf değilse çalışmaz
        {
            while (av[1][i])//yazdırcağımız cümlenin sonuna kadar
            {
                if (av[1][i] == av[2][0])//eğer bulunduğumuz harf değiştirilcek harfse
                    write(1,&av[3][0],1);//3. parametredeki harfi yazıyo
                else
                    write(1,&av[1][i],1);//değilse normal yazdırmaya devam
                i++;
            }
        }
    }
    write(1,"\n",1);
}