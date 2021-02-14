global _ft_write
extern ___error

; ssize_t write(int rdi, const void *rsi, size_t rdx);

section .text

_ft_write:
		mov rax, 0x2000004
		syscall
		jc .error
		ret

.error:
		push r8
		mov r8, rax
		call ___error
		mov [rax], r8
		pop r8
		mov rax, -1
		ret
