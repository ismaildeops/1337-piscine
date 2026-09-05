#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}
int count_words(char *s)
{
	int i = 0;
	int counts = 0;
	while(s[i])
	{
		while(is_space(s[i]))
			i++;
		while(!is_space(s[i]) && s[i])
			i++;
		counts++;
		i++;
	}
	return counts;
}

char **ft_split(char *s)
{
	char **words;
	int i = 0;
	int start = 0;
	int end = 0;
	int j = 0;
	int k;
	words = malloc(sizeof(char *) * count_words(s) + 1);
	//---------------------------------------------------------------------------------------
	while(s[i])
	{
		while(is_space(s[i]))
			i++;
		start = i;
		while(!is_space(s[i]) && s[i])
		{
			i++;
		}
		end = i;
		words[j] = malloc(sizeof(char) * (end - start) + 1);
		if (!words[j])
			return (NULL);
		k = 0;
		while(k < end - start)
		{
			words[j][k] = s[start + k];
			k++;
		}
		words[j][end - start] = '\0';
		j++;
	}
	words[j] = NULL;
	return words;
}

int main()
{
	char **str;
	int i;
	str = ft_split("Hello world Hi");
	i = 0;
	while(str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	return 0;
}