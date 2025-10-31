#ifndef _CPU_H
#define _CPU_H 1

#include <stdint.h>

typedef struct cpu_t {
    uint64_t regs[32];
    uint64_t pc;
    uint8_t* dram;
} cpu_t;

void cpu_init(cpu_t* cpu, size_t dram_size);

#endif
