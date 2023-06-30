section .data
    msg db 'Hello, Holberton', 0

section .text
    global _start

_start:
    ; Write the string to standard output
    mov eax, 4            ; System call number for write
    mov ebx, 1            ; File descriptor for stdout
    mov ecx, msg          ; Address of the string
    mov edx, 3            ; Length of the string
    int 0x80              ; Call the kernel

    ; Exit the program
    mov eax, 1            ; System call number for exit
    xor ebx, ebx          ; Exit status code 0
    int 0x80              ; Call the kernel

