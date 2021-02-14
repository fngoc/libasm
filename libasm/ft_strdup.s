global _ft_strdup
extern _ft_strlen
extern _malloc
extern _ft_strcpy

; char *ft_strdup(const char *rdi);

section .text

_ft_strdup:
        push rdi
        mov rax, 0
        call _ft_strlen
        inc rax
        mov rdi, rax
        call _malloc
        pop rdi
        cmp rax, 0
        je .end
        mov rsi, rdi
        mov rdi, rax
        call _ft_strcpy
        jmp .end

.end:
        ret
