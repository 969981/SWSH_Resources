/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01225fb0; name: FUN_01225fb0
 */


undefined8 FUN_01225fb0(uint *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  lVar2 = nn::time::StandardSteadyClock::now();
  if (*param_1 < 3) {
    bVar4 = lVar2 - *(long *)(param_1 + 0x92) < *(long *)(&DAT_02168940 + (long)(int)*param_1 * 8);
    bVar1 = param_1[0x94] == 1;
    if ((!bVar1) &&
       (lVar2 - *(long *)(param_1 + 0x92) < *(long *)(&DAT_02168940 + (long)(int)*param_1 * 8))) {
      param_1[0x94] = 1;
      return 1;
    }
  }
  else {
    bVar1 = param_1[0x94] == 1;
    bVar4 = false;
  }
  uVar3 = 0;
  if ((!bVar4) && (bVar1)) {
    param_1[0x94] = 2;
    uVar3 = 1;
  }
  return uVar3;
}


