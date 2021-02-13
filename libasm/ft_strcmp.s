global _ft_strcmp
extern _ft_strlen

; int ft_strcmp(const char *rdi, const char *rsi)

section .text

_ft_strcmp:
		mov r8, 0
		mov r12, rdi
		jmp .check

.check:
		call _ft_strlen
		mov r10, rax
		mov rdi, rsi
		call _ft_strlen
		mov r11, rax
		cmp r10, r11
		mov rdi, r12
		je .while
		; jl .less
		; jg .greater

.while:
		mov cl, byte[rdi + r8]
		cmp byte[rsi + r8], cl
		jne .end
		inc r8
		jmp .while

.end:
		movzx rax, byte[rdi + r8]
		movzx r9, byte[rsi + r8]
		sub rax, r9
		ret
