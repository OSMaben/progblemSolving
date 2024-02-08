#include <stdio.h>
#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (is_separator(str[i], charset) && str[i])
			i++;
		if (!is_separator(str[i], charset) && str[i])
			count++;
		while (!is_separator(str[i], charset) && str[i])
			i++;
	}
	return (count);
}

void	copy_words(char *src, char *dest, char *charset)
{
	int	i;

	i = 0;
	while (src[i] && !is_separator(src[i], charset))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int count;
	char **ptr;
	int j;

	count = count_words(str, charset);
	j = 0;
	ptr (char **)malloc((count + 1) * sizeof(char *));
	while (j < count)
	{
		while (is_separator(*str, charset) && *str)
			str++;
		while (!is_separator(str[l], charset) && str[l])
			l++;
		ptr[j] = (char *)malloc((l + 1) * sizeof(char));
		copy_words(str, ptr[j], charset);
		str += l;
		j++;
	}

	ptr[j] = NULL;

	return (ptr);
	}

int main() {
	char *str = "med oussama med";
	char *separator = "med";
	char **result = ft_split(str, separator);

	if (result) {
		for (int i = 0; result[i]; i++) {
			printf("Word %d: %s\n", i + 1, result[i]);
			free(result[i]);
		}

		free(result);
	} else {
		printf("Memory allocation error or no words found.\n");
	}

	return 0;
	}

