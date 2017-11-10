/* Surely you will remove the processor conditionals and this comment
   appropriately depending on whether or not you use C++. */
#if !defined(__cplusplus)
#include <stdbool.h> /* C doesn't have booleans by default. */
#endif
#include <stddef.h>
#include <stdint.h>
#include "mem.h"
 
/* Check if the compiler thinks we are targeting the wrong operating system. */
#if defined(__linux__)
#error "You are not using a cross-compiler, you will most certainly run into trouble"
#endif
 
/* This tutorial will only work for the 32-bit ix86 targets. */
#if !defined(__i386__)
#error "This tutorial needs to be compiled with a ix86-elf compiler"
#endif

char shell_buffer[200];
uint16_t index_buffer = 0;

#include "welcome.h"
#include "inout.h"
#include "key.h"
#include "vga.h"
#include "terminal.h"
#include "shell.h"
#include "keyboard.h"

 
#if defined(__cplusplus)
extern "C" /* Use C linkage for kernel_main. */
#endif
void kernel_main(void) {
	/* Initialize terminal interface */
	terminal_initialize();
 
	/* Newline support is left as an exercise. */
	terminal_writestring(welcomemsg);
	terminal_writestring("root#>Presione (Enter) para comenzar");
	keyboard_init_pics(0x20,0x28);
	char c=0;
	do{
		if(inb(0x60)!=c){
			c = inb(0x60);
			if(c>0){
				keyboard_charshell(c);
				}
		}
	}while(1);
}
