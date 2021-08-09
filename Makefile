all:
	gcc -c boot.c -o boot.o -fno-stack-protector -fno-builtin -fcf-protection=none
	ld boot.o -o boot.pe -mi386pep --subsystem=0xa
	objcopy -R .comment -R .eh_fram -R .note.gn boot.pe -S bootx64.efi
clean:
	rm -f boot.o boot.pe bootx64.efi
