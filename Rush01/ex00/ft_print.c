void	ft_putchar(char c);

void ft_num_res(int size, char *str)
{
	char s[size * size];
	int i ;

	i = 0;
	while(*str)
	{
		if (str[0] >= 48 && str[0] <= 57)
		{
			s[i] = str[0];
			i++;
		}
		str++;
	}
}
