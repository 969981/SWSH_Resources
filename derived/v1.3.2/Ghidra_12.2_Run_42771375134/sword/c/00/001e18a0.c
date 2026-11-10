/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e18a0; name: FUN_001e18a0
 */


long FUN_001e18a0(long param_1)

{
  long lVar1;
  long lVar2;
  short sVar3;
  
  sVar3 = *(short *)(param_1 + 8);
  param_1 = param_1 + 0x28;
  lVar1 = 0;
  if (sVar3 == 6) {
    lVar1 = param_1;
  }
  lVar2 = param_1;
  if (sVar3 != 7) {
    lVar2 = lVar1;
  }
  if (sVar3 != 0x10) {
    param_1 = lVar2;
  }
  return param_1;
}


