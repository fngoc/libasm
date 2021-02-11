#include <stdio.h>

/*
** jl меньше je равно jg больше
*/

size_t  ft_strlen(char *s);
void	ft_putchar(char s);
void	ft_putstr(char *s);
char	*ft_strcpy(char *dst, const char *src);

int main(void)
{
	char str1[50];
	char str2[50] = "Hello world!";

	printf("%zu\n", ft_strlen("123456789011"));
	ft_putchar('S');
	ft_strcpy(str1, str2);
	printf("%s\n", str1);
	ft_putstr("Lol");
    return (0);
}
