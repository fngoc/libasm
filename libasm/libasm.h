#ifndef LIBASM_H

# define LIBASM_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>

size_t	ft_strlen(char *rdi);

char	*ft_strcpy(char *rdi, const char *rsi);

int		ft_strcmp(const char *rdi, const char *rsi);

ssize_t	ft_write(int rdi, const void *rsi, size_t rdx);

ssize_t	ft_read(int rdi, void *rsi, size_t rdx);

char	*ft_strdup(const char *rdi);

#endif
