unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (src[count])
	{
		count++;		
	}
	if (size < 1)
	{
		return (count);		
	}
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}

