/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <fngoc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:01:59 by fngoc             #+#    #+#             */
/*   Updated: 2021/02/14 21:02:01 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "libasm_bonus.h"

static	t_list	*ft_lstlast(t_list *lst)
{
	t_list *p;
	t_list *l;

	p = lst;
	l = p;
	while (p != NULL)
	{
		l = p;
		p = p->next;
	}
	return (l);
}

static	t_list	*ft_lstnew(void *content)
{
	t_list *list;

	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	list->data = content;
	list->next = NULL;
	return (list);
}

static	void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *p;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	if ((p = ft_lstlast(*lst)) != NULL)
		p->next = new;
}

int				main(void)
{
	char	*line1;
	char	*line2;
	char	*line3;
	t_list	*head;

	line1 = ft_strdup("Hello");
	line2 = ft_strdup("It's me");
	line3 = ft_strdup("Mario!");
	head = ft_lstnew(line1);
	ft_lstadd_back(&head, ft_lstnew(line2));
	ft_lstadd_back(&head, ft_lstnew(line3));
	printf("ft_list_size : %d", ft_list_size(head));
}
