#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

/**
	Interrupt inicialization
*/
void keyboard_init_pics(int pic1, int pic2)
{
   /* send ICW1 */
   outb(PIC1, ICW1);
   outb(PIC2, ICW1);

   /* send ICW2 */
   outb(PIC1 + 1, pic1);
   outb(PIC2 + 1, pic2);

   /* send ICW3 */
   outb(PIC1 + 1, 4);
   outb(PIC2 + 1, 2);

   /* send ICW4 */
   outb(PIC1 + 1, ICW4);
   outb(PIC2 + 1, ICW4);

   /* disable all IRQs */
   outb(PIC1 + 1, 0xFF);
}


void keyboard_charshell(int32_t keycode) {
	if(keycode < 0) return;
	char ch = 0;
	ch = keymap_lower[keycode];
	//case handled, now pass to shell
	shell_handle_key(keycode, ch);
}
