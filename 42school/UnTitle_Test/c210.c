#include <stdlib.h>

int	ft_len(int size, char **strs, char *sep)
{
	int	i;
	int	count;
	int	len;
	int	a;

	i = 0;
	count = 0;
	a = 0;
	len = 0;
	while (i < size)
	{
		while (strs[i][count])
		{
			len++;
			count++;
		}
		i++;
	}
	while (sep[a])
		a++;
	len += (a * (size - 1));
	return (len);
}

void	ft_sep(char *sep, char *final, int *a)
{
	int	se;

	se = 0;
	while (sep[se])
	{
		final[*a] = sep[se];
		se++;
		*a = *a + 1;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	int		count;
	int		a;
	char	*final;

	len = ft_len(size, strs, sep);
	final = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	a = 0;
	while (i < size)
	{
		count = 0;
		while (strs[i][count])
		{
			final[a] = strs[i][count];
			a++;
			count++;
		}
		if (i + 1 < size)
			ft_sep(sep, final, &a);
		i++;
	}
	final[a] = '\0';
	return (final);
}






#include <stdio.h>
#include <string.h>
int main(int ac, char *ag[])
{
	printf("%s", ft_strjoin(ac,ag,"__/__"));
	return (0);
}


/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char d[]="bilgisay";
	char s[]="bilgisayar";
	printf("normal %s ",strstr(d,s));
	//printf("\nbenimki %s ",ft_strstr(d,s));
	printf("  %s d ",d);
	return (0);
}
*/


/*#include <stdlib.h>

int	ft_len(int size, char **strs, char *sep)
{
	int	i;
	int	count;
	int	len;
	int	a;

	i = 0;
	count = 0;
	a = 0;
	len = 0;
	while (i < size)
	{
		while (strs[i][count])
		{
			len++;
			count++;
		}
		i++;
	}
	while (sep[a])
		a++;
	len += (a * (size - 1));
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	int		count;
	int		a;
	int		se;
	char	*final;

	len = ft_len(size, strs, sep);
	final = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	a = 0;
	while (i < size)
	{
		count = 0;
		while (strs[i][count])
		{
			final[a] = strs[i][count];
			a++;
			count++;
		}
		se = 0;
		if (i + 1 < size)
		{
			while (sep[se])
			{
				final[a] = sep[se];
				se++;
				a++;
			}
		}
		i++;
	}
	final[a] = '\0';
	return (final);
}
*/