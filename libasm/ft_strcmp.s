global _ft_strcmp

; int strcmp(const char *rdi, const char *rsi)

section .text
_ft_strcmp:
		mov r9, 0
.while
		cmp byte[rdi], 0
		je .


.end
    ret