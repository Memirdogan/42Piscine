#include <unistd.h>
void printbits(unsigned char octlet)
{
    int oct;
    int bit;

    bit=128;
    oct = octlet;
    while (bit != 0) // bitimiz 0 byta eşit olana kadar düşürcez
    {
        if (bit <= oct)//eğer bitimiz octumuzdan düşükse bu 1 olduğu anlamına geliyo
        {
            write(1,"1",1);
            oct = oct % bit;//1 bastırdıktan sonra modunu alarak biti temizliyoruz
        }
        else
        {
            write(1,"0",1);
        }
        bit = bit / 2;//her bitin sırayla kontrol edilmesini sağlar
    }
}