/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010247a0; name: FUN_010247a0
 */


undefined4 FUN_010247a0(long param_1,long *param_2)

{
  long *plVar2;
  long *plVar1;
  
  if (*(long **)(param_1 + 0x20) == *(long **)(param_1 + 0x28)) {
    return 0xffffffff;
  }
  plVar1 = *(long **)(param_1 + 0x20);
  do {
    plVar2 = plVar1 + 8;
    if (*plVar1 == *param_2) {
      return (int)plVar1[7];
    }
    plVar1 = plVar2;
  } while (*(long **)(param_1 + 0x28) != plVar2);
  return 0xffffffff;
}


