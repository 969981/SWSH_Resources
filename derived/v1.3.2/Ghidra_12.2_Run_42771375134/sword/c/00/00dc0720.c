/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc0720; name: FUN_00dc0720
 */


void FUN_00dc0720(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x460);
  for (plVar1 = *(long **)(param_1 + 0x458); plVar1 != plVar2; plVar1 = plVar1 + 0x30) {
    if (*plVar1 == *param_2) {
      FUN_00794700(plVar1[0x24]);
    }
  }
  return;
}


