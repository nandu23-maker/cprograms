	.file	"code4.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "  \0"
LC1:
	.ascii "*\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$5, 28(%esp)
	jmp	L2
L5:
	movl	$1, 24(%esp)
	jmp	L3
L4:
	movl	$LC0, (%esp)
	call	_printf
	addl	$1, 24(%esp)
L3:
	movl	24(%esp), %eax
	cmpl	28(%esp), %eax
	jl	L4
	movl	$LC1, (%esp)
	call	_puts
	subl	$1, 28(%esp)
L2:
	cmpl	$1, 28(%esp)
	jle	L5
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
