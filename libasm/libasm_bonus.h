#ifndef LIBASM_BONUS_H

# define LIBASM_BONUS_H

# include <stdio.h>
# include <stdlib.h>

typedef	struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

int					ft_list_size(t_list *rdi);

#endif
