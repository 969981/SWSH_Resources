/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d6d50; name: FUN_004d6d50
 */


void FUN_004d6d50(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0xa8);
  if (*plVar1 != 0) {
    FUN_004904f0(plVar1);
    FUN_004905b0(plVar1);
  }
  FUN_004904f0(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  FUN_004d7740(param_1 + 0x10);
  return;
}


