int ft_atoi(char *str)
{
    int i=0;
    int s=1;
    int res=0;

    while(str[i] >= '\t' && str[i] <= '\r' || str[i] == ' ' )
    {
        i++;
    }
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i]== '-')
        {
            s = s * -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') 
    {
        res = (str[i] - '0') + (res * 10);
        i++;
    }
    return(res * s);
}

/* int		main(void)
{
	printf("%d\n", ft_atoi("      	 ---+--+1234ab567"));

} */