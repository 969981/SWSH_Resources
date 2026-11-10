/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006038d0; name: FUN_006038d0
 */


void FUN_006038d0(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  
  if ((param_1 != 0) && (0 < *(short *)(param_1 + 2))) {
    plVar2 = *(long **)(param_1 + 8);
    uVar1 = 0;
    do {
      *plVar2 = *plVar2 + param_2;
      plVar2[1] = plVar2[1] + param_3;
      uVar1 = uVar1 + 1;
      plVar2 = plVar2 + 2;
    } while ((int)(uVar1 & 0xffff) < (int)*(short *)(param_1 + 2));
  }
  return;
}


