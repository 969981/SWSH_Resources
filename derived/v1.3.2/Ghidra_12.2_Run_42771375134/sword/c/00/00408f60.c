/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00408f60; name: FUN_00408f60
 */


void FUN_00408f60(long param_1)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x30); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) | 0x10;
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_004be2e0(*(undefined8 *)PTR_DAT_02712b18);
  return;
}


