#include <stdio.h>

/*
** jl меньше je равно jg больше
*/

size_t	ft_strlen(char *rdi);
char	*ft_strcpy(char *rdi, const char *rsi);
int		ft_strcmp(const char *rdi, const char *rsi);
ssize_t	ft_write(int rdi, const void *rsi, size_t rdx);
ssize_t	ft_read(int rdi, void *rsi, size_t rdx);

int main(void)
{
	char str1[50];
	char str2[50] = "Hello world!";
	char str3[50];

	printf("%zu\n", ft_strlen("123456789012"));

	ft_strcpy(str1, str2);
	printf("%s\n", str1);

	printf("res: %d\n", ft_strcmp("1239", "1235"));

	ft_write(1, "1234500\n", 8);

	ft_read(1, str3, 50);
	printf("%s\n", str3);

    return (0);
}
