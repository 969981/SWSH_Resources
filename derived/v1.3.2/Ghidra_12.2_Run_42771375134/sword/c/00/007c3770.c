/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c3770; name: FUN_007c3770
 */


void FUN_007c3770(long param_1)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 local_14;
  
  cVar1 = *(char *)(param_1 + 0x354);
  uVar3 = *(uint *)(param_1 + 0x358);
  if (cVar1 != '\0' && uVar3 < 2) {
    uVar2 = FUN_007c3950(param_1);
    if ((uVar2 & 1) == 0) goto LAB_007c3800;
    cVar1 = *(char *)(param_1 + 0x354);
    uVar3 = *(uint *)(param_1 + 0x358);
  }
  if ((((cVar1 == '\0') || ((uVar3 | 2) != 2)) ||
      ((*(long *)PTR_DAT_02716b80 != 0 &&
       (((uVar2 = FUN_007c29b0(), (uVar2 & 1) != 0 &&
         (uVar2 = FUN_007c4550(param_1), (uVar2 & 1) != 0)) &&
        (uVar2 = FUN_007c4930(param_1), (uVar2 & 1) != 0)))))) &&
     ((*(long *)PTR_DAT_02716b80 != 0 && (uVar2 = FUN_007c29b0(), (uVar2 & 1) != 0)))) {
    return;
  }
LAB_007c3800:
  FUN_007c3a50(param_1);
  FUN_007a9cc0(1);
  if (*(long *)PTR_DAT_02716b80 != 0) {
    local_14 = 3;
    FUN_007c2c00(*(long *)PTR_DAT_02716b80,&local_14);
  }
  *(undefined4 *)(param_1 + 0x350) = 0;
  return;
}


