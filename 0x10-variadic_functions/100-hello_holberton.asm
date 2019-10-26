	.file	"100-hello.c"
	.section	.rodata
.LC0:
	.string	"Hello, Holberton\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	$.LC0, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$18, %edx
	movq	%rax, %rsi
	movl	$1, %edi
	call	write
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.5.0-12ubuntu1~14.04) 5.5.0 20171010"
	.section	.note.GNU-stack,"",@progbits
