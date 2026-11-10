/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00140450; name: FUN_00140450
 */


void FUN_00140450(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x30) | *(uint *)(param_1 + 0x30) >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = (uVar3 | uVar3 >> 0x10) + 1;
  if ((uVar3 == *(uint *)(param_1 + 0x10)) ||
     (uVar2 = *(uint *)(param_1 + 0x18), uVar3 < uVar2 && *(uint *)(param_1 + 0x10) == uVar2)) {
    return;
  }
  uVar1 = uVar2;
  if (uVar2 <= uVar3) {
    uVar1 = uVar3;
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  *(uint *)(param_1 + 0x38) = uVar1 - 1;
  if (uVar2 < uVar3) {
    FUN_0013fe50(param_1,1);
    return;
  }
  if (*(uint *)(param_1 + 0x14) >> 2 < uVar1) {
    FUN_0013fe50(param_1,uVar1 <= *(uint *)(param_1 + 0x34) >> 2);
    return;
  }
  FUN_0013fe50(param_1,1);
  return;
}


