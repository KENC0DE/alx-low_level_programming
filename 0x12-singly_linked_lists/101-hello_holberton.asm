section .data
    hello db "Hello, Holberton", 10  ; 10 is the ASCII value for newline
    len equ $ - hello                ; Length of the string

section .text
    global _start

_start:
    ; Prepare the arguments for the write system call
    mov eax, 1            ; System call number for write
    mov edi, 1            ; File descriptor for stdout
    mov esi, hello        ; Address of the string
    mov edx, len          ; Length of the string

    ; Call the write system call
    syscall

    ; Exit the program
    mov eax, 60           ; System call number for exit
    xor edi, edi          ; Exit status code 0
    syscall

