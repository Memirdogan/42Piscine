char *ft_strrev(char *str)
{
    char tmp; //karakterlerin yerlerini değiştirirken kullanmak için değişken
    int len;//uzunluk
    int i;//sayaç
    i=0;
    len = 0;
    while(str[len])//uzunluğumuzu hesaplıyoruz
        len++;
    len--;//-1 çıkarıyoruz çümki \0
    while (i < len)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
    return(str);
}
/*
#include <stdio.h>
int main() {
    char str[] = "musa"; // Değişken olarak tanımlanmış bir karakter dizisi
    printf("%s\n", ft_strrev(str));
    return 0;
}
*/