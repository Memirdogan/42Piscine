char *lowercase(char *str)
{
	int 	i;
	
	i = 0;
	
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return(str);
}
char *ft_strcapitalize(char *str)
{
	int i;
	int kontrol;
	
	i = 0;
	kontrol = 1;
	lowercase(str);
	
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			if(kontrol == 1)
			{
				str[i] = str[i] - 32;
			}
			kontrol = 0;
		}
		else if(str[i] >= '0' && str[i] <= '9')
		{
			kontrol = 0;
		}
		else
			kontrol = 1;
		i++;
	}
	return(str);
}
