#include "mem.h"

void memory_copy(void* src, void* dst , size_t size){
	uint8_t* bsrc = (uint8_t*)src;
	uint8_t* bdst = (uint8_t*)dst;
	for(size_t i = 0; i < size; i++){
		bdst[i] = bsrc[i];
	}
}

void memory_set(void* dst, uint32_t size, uint8_t fill){
	for(uint32_t i = 0; i < size; i++){
		((uint8_t*)dst)[i] = fill;
	}
}

//this is definately fool-proof ;)
uint8_t* ptr = (uint8_t*) 3145728;
void* kmalloc(size_t size){
	void* ret = (void*) ptr;
	ptr += size;
	ptr+= 2;
	return ret;
}
