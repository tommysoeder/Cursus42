#include <stdlib.h>
// #include <stdio.h>

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = (char *)malloc(end - start + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	free_all(char **res, int i)
{
	while (i--)
		free(res[i]);
	free(res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		start;

	if (!s)
		return (NULL);
	res = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			res[j] = word_dup(s, start, i);
			if (!res[j++])
				return (free_all(res, j - 1), NULL);
		}
		else
			i++;
	}
	res[j] = NULL;
	return (res);
}

// int main(void)
// {
//     char **result;
//     int i;

//     result = ft_split("Estamos muy a gusto aquí", ' ');

//     if (!result)
//     {
//         printf("Error");
//         return (1);
//     }
//     i = 0;
//     while (result[i])
//     {
//         printf("result[%d] = \"%s\"\n", i, result[i]);
//         free(result[i]);
//         i++;
//     }
//     free(result);
//     return(0);
// }