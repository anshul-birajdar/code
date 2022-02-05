default:
	rm -rf hello
	riscv64-linux-gnu-as hello.s -o hello.o
	riscv64-linux-gnu-gcc-10 -o hello hello.o -nostdlib -static
