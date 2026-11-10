/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00683020; name: FUN_00683020
 */


ulong FUN_00683020(long *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x88))();
  uVar2 = (param_2 + lVar1) - 1U & -param_2;
  lVar3 = uVar2 - lVar1;
  if ((lVar3 != 0 && lVar1 <= (long)uVar2) && (0 < lVar3)) {
    do {
      (**(code **)(*param_1 + 0x1a0))(param_1,param_3,1);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return uVar2;
}


