section .data
    format_string db 'Hello, Holberton', 10, 0

section .text
    global main

    extern printf

main:
    mov rdi, format_string
    mov rax, 0
    call printf

    mov rax, 60
    xor rdi, rdi
    syscall

