global	_ft_strlen

; size_t ft_strlen(char *rdi)

section .text
_ft_strlen:
		mov rax, 0

.while:
		cmp byte[rdi + rax], 0
		je .end
		inc rax
		jmp .while

.end:			
		ret