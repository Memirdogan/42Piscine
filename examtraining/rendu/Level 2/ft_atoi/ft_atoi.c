#include <stdio.h>

int ft_atoi(char *str)
{
    int i; //Diziyi dolaşmak için kullanılacak bir sayacı temsil eder.
    int t; //İşaretin negatif veya pozitif olduğunu belirlemek için kullanılır (varsayılan olarak 1, yani pozitif).
    int a; //Tamsayı değerini biriktirmek için kullanılır.

    t=1; //- ile çarpılcağı için 1 den başlatıyoruz
    a=0;
    i=0;
    //dizimizin başındaki boşluk tv fnr kısımlarını esgeçiyoruz
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r')
    {
        i++;
    }

    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            t = t * -1;
        }
        i++;  //Bu döngü, baştaki işareti (+ veya -) işler. Eğer karakter "-" ise,
    }         //t değişkenini -1 ile çarparak işaretin negatif olduğunu belirtir.
    while (str[i] <= '9' && str[i] >= '0')
    {
        a = a * 10  + str[i] - 48;
        i++;
    }
    return(t * a);
}
int main(void)
{
    char str[]="--+---7854a2";
    printf("%d",ft_atoi(str));
}