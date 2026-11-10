/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7e0e0; name: FUN_00e7e0e0
 */


uint FUN_00e7e0e0(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long local_18;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (*(int *)(*param_1 + 0x54) == 0) {
    return 0;
  }
  FUN_00deff50(&local_18);
  if (*(long **)(local_18 + 0x1f0) == *(long **)(local_18 + 0x1e8)) {
    lVar3 = 0;
  }
  else {
    lVar3 = **(long **)(local_18 + 0x1e8);
  }
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    local_18 = 0;
  }
  lVar3 = lVar3 + 0x50;
  uVar2 = FUN_00e876b0(lVar3);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar2 = FUN_00e877a0(lVar3);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar2 = FUN_00e87890(lVar3);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar2 = FUN_00e87980(lVar3);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar2 = FUN_00e87a70(lVar3);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar2 = FUN_00e47d30(lVar3);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar2 = FUN_00e87b60(lVar3);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_00e87c50(lVar3);
    return uVar1 & 1;
  }
  return 1;
}


