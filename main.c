#include "libft.h"
#include <stdio.h>

void print_content(void *str) {
    ft_putendl_fd(str, 1);
}

int main(void) {
    t_list *lst = NULL;

    ft_lstadd_back(&lst, ft_lstnew("a"));
    ft_lstadd_back(&lst, ft_lstnew("b"));
    ft_lstadd_back(&lst, ft_lstnew("c"));
    ft_lstadd_back(&lst, ft_lstnew("d"));

    ft_lstiter(lst, print_content);
    return 0;
}
