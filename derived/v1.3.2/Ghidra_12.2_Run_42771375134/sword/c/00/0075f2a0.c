/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075f2a0; name: FUN_0075f2a0
 */


long FUN_0075f2a0(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = (param_1 + 0x10U) / param_2;
  }
  lVar3 = (param_1 + 0x10U) - uVar2 * param_2;
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = param_2 - lVar3;
  }
  return lVar1;
}


