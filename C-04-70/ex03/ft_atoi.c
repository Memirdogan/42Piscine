int ft_atoi(char *str)
{
   int a;
   int i;
   int t;

   i=0;
   a=0;
   t=1;

   while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' 
        || str[i] == '\f' || str[i] == '\n' || str[i] == '\r')
   {
    i++;
   }
   while (str[i] == '+' || str[i] == '-')
   {
        if (str[i] == '-')
        {
            t*=-1;
        }
        i++;
   }
   while (str[i] >= '0' && str[i] <= '9')
   {
        a = (a * 10) + str[i] - 48;
        i++;
   }
   return(t * a);
}
/*
#include <stdio.h>
 int		main(void)
{
	printf("%d\n", ft_atoi("      	 ---+--+1234ab567"));

}*/
