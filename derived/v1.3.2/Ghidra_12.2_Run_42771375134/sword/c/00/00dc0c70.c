/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc0c70; name: FUN_00dc0c70
 */


void FUN_00dc0c70(long param_1,long *param_2,byte param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x458);
  plVar2 = *(long **)(param_1 + 0x460);
  if (plVar1 != plVar2) {
    do {
      if (*plVar1 == *param_2) {
        *(byte *)((long)plVar1 + 0x176) = param_3 & 1;
      }
      plVar1 = plVar1 + 0x30;
    } while (plVar2 != plVar1);
  }
  return;
}


