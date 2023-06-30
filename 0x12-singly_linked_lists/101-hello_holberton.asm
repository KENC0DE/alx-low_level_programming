section .data
    format db "Hello, Holberton\n", 0

section .text
    global _start

extern printf
extern exit

_start:
    ; Prepare the arguments for the printf function
    push format        ; Push the address of the format string onto the stack
    call printf        ; Call the printf function

    ; Exit the program
    xor eax, eax       ; Set the exit status code to 0
    call exit          ; Call the exit function

