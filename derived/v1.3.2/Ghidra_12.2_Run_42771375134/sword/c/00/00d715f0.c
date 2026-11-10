/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d715f0; name: FUN_00d715f0
 */


bool FUN_00d715f0(long param_1,long param_2)

{
  if (((((*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) &&
        (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10))) &&
       (*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18))) &&
      (((*(long *)(param_1 + 0x20) == *(long *)(param_2 + 0x20) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_2 + 0x28))) &&
       ((*(long *)(param_1 + 0x30) == *(long *)(param_2 + 0x30) &&
        ((*(long *)(param_1 + 0x38) == *(long *)(param_2 + 0x38) &&
         (*(long *)(param_1 + 0x40) == *(long *)(param_2 + 0x40))))))))) &&
     ((*(long *)(param_1 + 0x48) == *(long *)(param_2 + 0x48) &&
      (((((*(long *)(param_1 + 0x50) == *(long *)(param_2 + 0x50) &&
          (*(long *)(param_1 + 0x58) == *(long *)(param_2 + 0x58))) &&
         (*(long *)(param_1 + 0x60) == *(long *)(param_2 + 0x60))) &&
        ((*(long *)(param_1 + 0x68) == *(long *)(param_2 + 0x68) &&
         (*(long *)(param_1 + 0x70) == *(long *)(param_2 + 0x70))))) &&
       (*(long *)(param_1 + 0x78) == *(long *)(param_2 + 0x78))))))) {
    return *(long *)(param_1 + 0x80) == *(long *)(param_2 + 0x80);
  }
  return false;
}


