global _ft_putstr
extern _ft_putchar

; void	ft_putstr_fd(char *rdi)

section .text
_ft_putstr:		mov rsi, 0

.while:			cmp byte[rdi + rsi], 0
				je .end
				push rdi
				mov dil, byte[rdi + rsi]
				call _ft_putchar
				pop rdi
				inc	rsi
				jmp .while
.end:
				ret