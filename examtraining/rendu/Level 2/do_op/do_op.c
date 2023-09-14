#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
//basit bir hesap makinesi istiyor program ve kütüphanelere izin veriyor
int main(int ac,char **av)
{
    int a;//1. değişken
    int b;//2. değişken
    int res;//sonucumuz
    char op;//operatörümüz

    a = atoi(av[1]);//atoi ile 1. değişkenimizi inte çeviriyoruz
    b = atoi(av[3]);//atoi ile 2. değişkenimizi inte çeviriyoruz
    op = av[2][0];//dizi kullanmaya uğraşmamak için operatözümüzü atıyoruz

    if(ac == 4)//çarpım işlemlerini yapıyoruz
    {
        if (op == '+')
            res = a + b;
        else if(op == '-')
            res = a - b;
        else if(op == '/')
            res = a / b;
        else if(op == '*')
            res = a * b;
        else if(op == '%')
            res = a % b;
        
        printf("%d\n",res);
    }
    else
        write(1,"\n",1);
}