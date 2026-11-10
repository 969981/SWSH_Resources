/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdc920; name: FUN_00bdc920
 */


bool FUN_00bdc920(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_28 [8];
  
  bVar1 = false;
  if ((*(long *)PTR_DAT_02716748 != 0) && (lVar2 = FUN_007ad1e0(), bVar1 = false, lVar2 != 0)) {
    if (*(char *)(param_1 + 0x1ac0) == '\0') {
      return false;
    }
    FUN_017cbe80(auStack_28);
    uVar3 = FUN_0185c210(lVar2,auStack_28);
    if ((uVar3 & 1) == 0) {
      return false;
    }
    lVar2 = FUN_017cc550(auStack_28);
    bVar1 = lVar2 < *(long *)(param_1 + 0x1ac8);
  }
  return bVar1;
}


