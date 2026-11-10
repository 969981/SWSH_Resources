/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f11b0; name: FUN_012f11b0
 */


long FUN_012f11b0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x3a0);
  if (((((((lVar2 == 0) || (iVar1 = FUN_012e4e90(lVar2), iVar1 == param_2)) ||
         (lVar2 = *(long *)(param_1 + 0x3a8), lVar2 == 0)) ||
        ((iVar1 = FUN_012e4e90(lVar2), iVar1 == param_2 ||
         (lVar2 = *(long *)(param_1 + 0x3b0), lVar2 == 0)))) ||
       ((iVar1 = FUN_012e4e90(lVar2), iVar1 == param_2 ||
        ((lVar2 = *(long *)(param_1 + 0x3b8), lVar2 == 0 ||
         (iVar1 = FUN_012e4e90(lVar2), iVar1 == param_2)))))) ||
      (lVar2 = *(long *)(param_1 + 0x3c0), lVar2 == 0)) ||
     ((((iVar1 = FUN_012e4e90(lVar2), iVar1 == param_2 ||
        (lVar2 = *(long *)(param_1 + 0x3c8), lVar2 == 0)) ||
       (iVar1 = FUN_012e4e90(lVar2), iVar1 == param_2)) ||
      (((lVar2 = *(long *)(param_1 + 0x3d0), lVar2 == 0 ||
        (iVar1 = FUN_012e4e90(lVar2), iVar1 == param_2)) ||
       ((lVar2 = *(long *)(param_1 + 0x3d8), lVar2 == 0 ||
        ((iVar1 = FUN_012e4e90(lVar2), iVar1 == param_2 ||
         (lVar3 = *(long *)(param_1 + 0x3e0), lVar2 = 0, lVar3 == 0)))))))))) {
    return lVar2;
  }
  iVar1 = FUN_012e4e90(lVar3);
  if (iVar1 != param_2) {
    lVar3 = 0;
  }
  return lVar3;
}


