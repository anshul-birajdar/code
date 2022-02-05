.global _start

_start:
	#write
	addi a7, zero, 64
	addi a0, zero, 1
	la a1, helloworld
	addi a2, zero, 6
	ecall
	
	# exit
	addi a7, zero, 93
	addi a0, zero, 1
	ecall

helloworld:
	.ascii "hello"
