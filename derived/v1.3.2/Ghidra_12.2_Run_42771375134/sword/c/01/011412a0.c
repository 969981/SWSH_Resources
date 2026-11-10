/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011412a0; name: FUN_011412a0
 */


uint FUN_011412a0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  
  if (*(int *)(param_1 + 0x6ac) == 2) {
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      return 0;
    }
    puVar3 = &DAT_02165808;
  }
  else {
    if (*(int *)(param_1 + 0x6ac) != 1) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      return 0;
    }
    puVar3 = &DAT_02165818;
  }
  uVar1 = FUN_0167bc20(lVar2,puVar3);
  return (uVar1 ^ 1) & 1;
}


