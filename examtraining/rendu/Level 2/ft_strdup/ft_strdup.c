#include <stdlib.h>
//malloc ile bellekten yer ayırıp kopyalama yapmamızı istiyor
char *ft_strdup(char *src)
{
    int len;//uzunluk parametremiz
    char *result;//kopyalıycağımız alan

    len=0;
    while (src[len])//ne kadar karakter kopyalayacağımızı sayıyoruz
    {
        len++;
    }
    
    result = malloc(sizeof(char) * len + 1);//bize char * uzunluğumuz boyutunda yer ayır (\0 için + 1) 
    len=0;
    while (src[len])
    {
        result[len] = src[len];
        len++;//ayırdığımız yere ana dizimizden kopyalama yapıyoruz
    }
    result[len] = '\0';
    return(result);
}
/*
#include <stdio.h>
int main()
{
    char *result;
    result = ft_strdup("hello!");
    printf("%s\n", result);
    free(result);
}
*/