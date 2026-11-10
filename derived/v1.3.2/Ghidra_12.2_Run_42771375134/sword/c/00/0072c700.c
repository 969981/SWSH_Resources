/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072c700; name: FUN_0072c700
 */


int FUN_0072c700(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x110);
  plVar2 = *(long **)(param_1 + 0x118);
  plVar3 = plVar1;
  if ((plVar2 != plVar1) && (*plVar1 != *param_2)) {
    do {
      plVar3 = plVar3 + 0x19;
      if (plVar2 == plVar3) {
        return -1;
      }
    } while (*plVar3 != *param_2);
  }
  if (plVar3 == plVar2) {
    return -1;
  }
  return (int)((ulong)((long)plVar3 - (long)plVar1) >> 3) * -0x3d70a3d7;
}


