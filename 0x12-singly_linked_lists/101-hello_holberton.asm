section .data
    format db "Hello, Holberton", 10, 0

section .text
    global main
    extern printf
    extern exit

main:
    ; Prepare the arguments for the printf function
    push format        ; Push the address of the format string onto the stack
    call printf        ; Call the printf function

    ; Exit the program
    xor eax, eax       ; Set the exit status code to 0
    call exit          ; Call the exit function

