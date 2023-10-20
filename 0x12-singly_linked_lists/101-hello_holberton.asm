section .text
    global _start

_start:
    mov rax, 0x2000004 ; write system call
    mov rdi, 1 ; stdout file descriptor
    mov rsi, msg ; address of string 
    mov rdx, 14 ; number of bytes to write
    syscall

    mov rax, 60 ; exit system call
    mov rdi, 0 ; exit code 0
    syscall 

section .data
    msg: db "Hello, Holberton", 10 ; string to print plus newline
