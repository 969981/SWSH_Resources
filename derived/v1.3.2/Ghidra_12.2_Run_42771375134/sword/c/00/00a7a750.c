/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a7a750; name: FUN_00a7a750
 */


bool FUN_00a7a750(long param_1)

{
  if (((((((*(long *)(param_1 + 0x1848) == -0x340d631b7bddd9bb) &&
          (*(long *)(param_1 + 0x1850) == -0x340d631b7bddd9bb)) &&
         (*(long *)(param_1 + 0x1858) == -0x340d631b7bddd9bb)) &&
        ((*(long *)(param_1 + 0x1860) == -0x340d631b7bddd9bb &&
         (*(long *)(param_1 + 0x1868) == -0x340d631b7bddd9bb)))) &&
       (((*(long *)(param_1 + 0x1870) == -0x340d631b7bddd9bb &&
         ((*(long *)(param_1 + 0x1878) == -0x340d631b7bddd9bb &&
          (*(long *)(param_1 + 0x1880) == -0x340d631b7bddd9bb)))) &&
        (*(long *)(param_1 + 0x1888) == -0x340d631b7bddd9bb)))) &&
      ((((*(long *)(param_1 + 0x1890) == -0x340d631b7bddd9bb &&
         (*(long *)(param_1 + 0x1898) == -0x340d631b7bddd9bb)) &&
        (*(long *)(param_1 + 0x18a0) == -0x340d631b7bddd9bb)) &&
       (((*(long *)(param_1 + 0x18a8) == -0x340d631b7bddd9bb &&
         (*(long *)(param_1 + 0x18b0) == -0x340d631b7bddd9bb)) &&
        ((*(long *)(param_1 + 0x18b8) == -0x340d631b7bddd9bb &&
         ((*(long *)(param_1 + 0x18c0) == -0x340d631b7bddd9bb &&
          (*(long *)(param_1 + 0x18c8) == -0x340d631b7bddd9bb)))))))))) &&
     ((*(long *)(param_1 + 0x18d0) == -0x340d631b7bddd9bb &&
      ((*(long *)(param_1 + 0x18d8) == -0x340d631b7bddd9bb &&
       (*(long *)(param_1 + 0x18e0) == -0x340d631b7bddd9bb)))))) {
    return true;
  }
  return *(char *)(*(long *)PTR_DAT_02710840 + 0x47e1) != '\0';
}


