/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e3ca0; name: FUN_007e3ca0
 */


long FUN_007e3ca0(long param_1,byte *param_2)

{
  long lVar1;
  long local_20;
  byte *pbStack_18;
  
  pbStack_18 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbStack_18 = param_2 + 1;
  }
  local_20 = param_1;
  lVar1 = FUN_007f77d0(*(long *)(*(long *)(param_1 + 0x10) + 0x98) + 0x28,&local_20);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x44) != '\0')) {
    lVar1 = 0;
  }
  return lVar1;
}


