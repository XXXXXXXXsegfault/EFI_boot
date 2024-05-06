all:
	gcc -c boot.c -o boot.o -fno-stack-protector -fcf-protection=none -O0 -fpie
	ld boot.o -o boot.pe -mi386pep --subsystem=10 --image-base 0x400000
	objcopy -R .comment -R .eh_fram -R .note.gn boot.pe -S bootx64.efi
clean:
	rm -f boot.o boot.pe bootx64.efi
