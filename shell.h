#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include "mem.h"

/**
	Reset the shell buffer
*/
void shell_reset_buffer() {
  index_buffer = 0;
  memory_set(shell_buffer, sizeof(shell_buffer), 0);
}

/**
	Prints command prompt at the shell
*/
void shell_print() {
	terminal_color = vga_entry_color(VGA_COLOR_LIGHT_GREY, VGA_COLOR_BLACK);
	terminal_writestring(terminalprompt);
	terminal_color = vga_entry_color(VGA_COLOR_LIGHT_BLUE, VGA_COLOR_BLACK);
}

/**
	Handle method for keys
*/
static inline void shell_handle_key(int32_t keycode, char ch) {
  if(keycode > 0 && ch > 2 && index_buffer + 1 < 200 && ch != '\n') {
    terminal_putchar(ch);
		shell_buffer[index_buffer] = ch;
		index_buffer++;
  }

	if(ch == '\n') {
		terminal_putchar('\n');
		shell_print();
		shell_reset_buffer();
	}
}
