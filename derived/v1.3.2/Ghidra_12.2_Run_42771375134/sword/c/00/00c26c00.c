/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c26c00; name: FUN_00c26c00
 */


bool FUN_00c26c00(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_28 [8];
  
  if (param_2 == 2) {
    if (*(char *)(param_1 + 0x1160) == '\0') {
      return true;
    }
    if (*(long *)PTR_DAT_02716748 == 0) {
      return true;
    }
    lVar1 = FUN_007ad1e0();
    if (lVar1 == 0) {
      return true;
    }
    FUN_017cbe80(auStack_28);
    uVar2 = FUN_0185c210(lVar1,auStack_28);
    if ((uVar2 & 1) == 0) {
      return true;
    }
    lVar1 = FUN_017cc550(auStack_28);
    lVar3 = *(long *)(param_1 + 0x11a8);
  }
  else {
    if (param_2 != 1) {
      return false;
    }
    if (*(char *)(param_1 + 0x908) == '\0') {
      return true;
    }
    if (*(long *)PTR_DAT_02716748 == 0) {
      return true;
    }
    lVar1 = FUN_007ad1e0();
    if (lVar1 == 0) {
      return true;
    }
    FUN_017cbe80(auStack_28);
    uVar2 = FUN_0185c210(lVar1,auStack_28);
    if ((uVar2 & 1) == 0) {
      return true;
    }
    lVar1 = FUN_017cc550(auStack_28);
    lVar3 = *(long *)(param_1 + 0x950);
  }
  return lVar3 <= lVar1;
}


