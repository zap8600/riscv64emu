#include <cpu.h>
#include <stdlib.h>
#include <string.h>

// Initialize a `cpu_t` struct. Caller must free `dram` themselves.
void cpu_init(cpu_t* cpu, size_t dram_size) {
    memset(cpu->regs, 0, 32 * sizeof(uint64_t));
    cpu->dram = (uint8_t*)malloc(dram_size);
}
