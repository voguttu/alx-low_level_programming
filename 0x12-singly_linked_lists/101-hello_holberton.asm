section .data
    message db 'Hello, Holberton', 0
    newline db 10, 0

section .text
    extern printf

global main
main:
    ; Prepare arguments for printf
    mov rdi, message
    xor rax, rax ; Clear rax register
    call printf

    ; Print new line
    mov rdi, newline
    xor rax, rax
    call printf

    ; Exit the program
    mov eax, 0x60
    xor edi, edi
    syscall
