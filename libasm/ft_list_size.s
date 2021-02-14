global _ft_list_size

; int	ft_list_size(t_list *rdi);

section .text

_ft_list_size:
        mov rax, 0

.while:
        cmp rdi, 0
        je .end
        inc rax
        mov rdi, [rdi + 8]
        jmp .while

.end:
        ret
