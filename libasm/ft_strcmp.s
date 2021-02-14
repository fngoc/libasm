global _ft_strcmp

; int ft_strcmp(const char *rdi, const char *rsi)

section .text

_ft_strcmp:
		mov r8, 0
		mov rax, 0

.while:
		cmp byte[rdi + r8], 0
		je .end
		cmp byte[rsi + r8], 0
		je .end
		mov cl, byte[rdi + r8]
		cmp byte[rsi + r8], cl
		jne .end
		inc r8
		jmp .while

.less:
		mov rax, 1
		ret

.greater:
		mov rax, -1
		ret

.end:
		movzx r10, byte[rdi + r8]
		movzx r9, byte[rsi + r8]
		cmp r9, r10
		jl .less
		jg .greater
		ret
