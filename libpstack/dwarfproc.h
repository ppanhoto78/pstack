#ifndef PSTACK_DWARFPROC_H
#define PSTACK_DWARFPROC_H

Elf_Addr dwarfGetCFA(DwarfInfo *dwarf, const Process &proc, const DwarfCallFrame *frame, const DwarfRegisters *regs);
uintmax_t dwarfGetReg(const DwarfRegisters *regs, int regno);
void dwarfSetReg(DwarfRegisters *regs, int regno, uintmax_t regval);
DwarfRegisters *dwarfPtToDwarf(DwarfRegisters *dwarf, const CoreRegisters *sys);
const DwarfRegisters *dwarfDwarfToPt(CoreRegisters *sys, const DwarfRegisters *dwarf);
bool dwarfUnwind(Process &, DwarfRegisters *, Elf_Addr &pc /*in/out */);

#endif // PSTACK_DWARFPROC_H

