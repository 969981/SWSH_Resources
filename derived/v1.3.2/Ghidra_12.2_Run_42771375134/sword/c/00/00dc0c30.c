/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc0c30; name: FUN_00dc0c30
 */


void FUN_00dc0c30(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x460);
  for (plVar1 = *(long **)(param_1 + 0x458); plVar1 != plVar2; plVar1 = plVar1 + 0x30) {
    if (*plVar1 == *param_2) {
      plVar1[0x2d] = param_3[1];
      plVar1[0x2c] = *param_3;
    }
  }
  return;
}


