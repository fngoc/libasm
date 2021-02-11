global	_ft_putchar

; void ft_putchar(char s);

section .text
_ft_putchar:
	push	rsi
	mov		rsi, rdi
	mov		rdi, 1
	mov		rdx, 1
	mov		rax, 0x02000004
	push	rsi
	mov		rsi, rsp
	syscall
	pop		rsi
	pop		rsi
	ret