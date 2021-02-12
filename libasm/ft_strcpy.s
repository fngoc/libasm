global _ft_strcpy

; char * ft_strcpy((char *)rdi, (char *)rsi)

section .text
_ft_strcpy: 
		mov r9, 0

.while:
		mov cl, byte[rsi + r9]
		mov byte[rdi + r9], cl
		cmp byte[rsi + r9], 0
		je .end
		inc r9
		jmp .while

.end:
		mov rax, rdi
		ret
		