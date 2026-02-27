.section .text
.global Sum

Sum:

    mov $0, %eax
    mov $0, %rcx

loop:
    cmp %rsi, %rcx
    jge done

    add (%rdi,%rcx,4), %eax
    

    inc %rcx
    jmp loop

done:
    ret
