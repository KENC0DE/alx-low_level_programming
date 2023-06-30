section .data
    message db 'Hello, Holberton', 0

section .text
    global _start

_start:
    ; Write the message to stdout
    mov eax, 4               ; Syscall number for write
    mov ebx, 1               ; File descriptor (stdout)
    mov ecx, message         ; Message to be printed
    mov edx, 3               ; Length of the message
    int 0x80                 ; Call the kernel

    ; Exit the program
    mov eax, 1               ; Syscall number for exit
    xor ebx, ebx             ; Exit code 0
    int 0x80                 ; Call the kernel

