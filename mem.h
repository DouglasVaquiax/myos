#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

void memory_copy(void* src, void* dest, size_t size);
void* kmalloc(size_t size);
void memory_set(void* dst, uint32_t size, uint8_t fill);
