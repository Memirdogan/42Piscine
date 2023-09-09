int	ft_len(char *string)
{
	int	i;

	i = 0;
	while (*string)
	{
		i++;
		string++;
	}
	return (i);
}

char *ft_strcat(char *dest, char *src)
{
	int	i;

	i = ft_len(dest);
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
