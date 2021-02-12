global _ft_strcmp

; int ft_strcmp(const char *rdi, const char *rsi)

section .text

_ft_strcmp:
		mov r8, 0
		mov rax, 0

.while:
		cmp byte[rdi + r8], 0
		je .end_str
		cmp byte[rsi + r8], 0
		je .end_str
		mov cl, byte[rdi + r8]
		cmp byte[rsi + r8], cl
		jne .end
		inc r8
		jmp .while

.end_str:
		mov rax, 0
		ret

.end:
		movzx rax, byte[rdi + r8]
		movzx r9, byte[rsi + r8]
		sub rax, r9
		ret
