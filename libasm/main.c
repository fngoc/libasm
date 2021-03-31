#include "libasm.h"

static	void	more_tests(void)
{
	char str1[50];
	char str2[50];

	printf("\n");
	printf("strlen: %zu\n", strlen("123456789012"));
	printf("ft_strlen: %zu\n", ft_strlen("123456789012"));
	printf("\n");
	printf("strcpy: %s\n", strcpy(str1, "Hello world!\0"));
	printf("ft_strcpy: %s\n", ft_strcpy(str2, "Hello world!\0"));
	printf("\n");
	printf("strcmp: %d\n", strcmp("sxdcfvb", "rty"));
	printf("ft_strcmp: %d\n", ft_strcmp("sxdcfvb", "rty"));
	printf("\n");
	write(-1, "IT IS WRITE\n", strlen("IT IS WRITE\n"));
	ft_write(-1, "IT IS WRITE\n", strlen("IT IS WRITE\n"));
	printf("\n");
	printf("Error write: %zd",
			write(-1, "IT IS WRITE\n", strlen("IT IS WRITE\n")));
	printf("\n");
	printf("Error ft_write: %zd",
			ft_write(-1, "IT IS WRITE\n", strlen("IT IS WRITE\n")));
	printf("\n");
}

int				main(void)
{
	char str3[6];
	char str4[6];
	char *str5;
	char *str6;

	more_tests();
	printf("\n");
	printf("ft_read: ");
	ft_read(1, str4, 10);
	str4[ft_strlen(str4)] = '\0';
	printf("%s", str4);
	printf("Error ft_read: %zd", ft_read(-1, str4, 10));
	printf("\n");
	printf("read: ");
	read(1, str3, 10);
	str3[ft_strlen(str3)] = '\0';
	printf("%s", str3);
	printf("Error read: %zd\n", read(-1, str4, 10));
	printf("\n");
	printf("strdup: %s\n", str5 = strdup("I AM HERE and you!"));
	printf("ft_strdup: %s\n", str6 = ft_strdup("I AM HERE and you!"));
	return (0);
}
