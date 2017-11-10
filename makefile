CROSSC = /home/sistemas/opt/cross/bin/./i686-elf-gcc
CROSSAS = /home/sistemas/opt/cross/bin/./i686-elf-as
CROSSCPARAMS = -std=gnu99 -ffreestanding -O2 -Wall -Wextra
LDPARAMS = -ffreestanding -O2 -nostdlib -lgcc

objects = boot.o kernel.o mem.o

build: boot.o kernel.o mem.o myos.bin myos.iso run

boot.o: boot.s
	$(CROSSAS) -o $@ $<

%.o: %.c
	$(CROSSC) $(CROSSCPARAMS) -c -o $@ $<

myos.bin: linker.ld $(objects)
	$(CROSSC) $(LDPARAMS) -T $< -o $@ $(objects)

myos.iso: myos.bin
	mkdir iso
	mkdir iso/boot
	mkdir iso/boot/grub
	cp $< iso/boot
	echo 'set timeout=0'> iso/boot/grub/grub.cfg
	echo 'set default=0' >> iso/boot/grub/grub.cfg
	echo '' >> iso/boot/grub/grub.cfg
	echo 'menuentry "ProyectoFinal" {' >> iso/boot/grub/grub.cfg
	echo '	multiboot /boot/myos.bin'>> iso/boot/grub/grub.cfg
	echo '	boot'>> iso/boot/grub/grub.cfg
	echo '}'>> iso/boot/grub/grub.cfg
	grub-mkrescue --output $@ iso
	rm -rf iso

run: myos.iso
	qemu-system-i386 -cdrom myos.iso

clean:
	rm *.o *.iso *.bin
