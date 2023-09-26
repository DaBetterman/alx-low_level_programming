section .data
    format db "Hello, Holberton",10,0   ; The format string with newline and null terminator

section .text
    global main
    extern printf

main:
    mov rdi, format           ; Load the address of the format string into rdi
    xor rax, rax             ; Clear rax register (return value)
    call printf              ; Call printf function
    mov rax, 60               ; System call number for exit (64-bit)
    xor rdi, rdi             ; Exit status: 0
    syscall                  ; Invoke the system call
