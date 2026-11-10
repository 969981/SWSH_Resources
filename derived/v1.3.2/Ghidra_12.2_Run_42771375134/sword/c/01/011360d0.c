/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011360d0; name: FUN_011360d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011360d0(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  long local_28;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (iVar1 == 2) {
    if (*(long *)(param_1 + 0x80) == 0) {
      local_28 = 0;
      _DAT_00000064 = 1;
    }
    else {
      FUN_01128420(&local_28);
      *(undefined4 *)(local_28 + 100) = 1;
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0x340),1);
    FUN_01037030(*(undefined8 *)(param_1 + 0x348));
    uVar4 = 9;
    goto LAB_011361b0;
  }
  if (iVar1 != 1) {
    return;
  }
  if (*(long *)(param_1 + 0x80) == 0) {
    lVar2 = 0;
LAB_01136160:
    local_28 = 0;
  }
  else {
    FUN_01128420(&local_28);
    lVar2 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      goto LAB_01136160;
    }
  }
  lVar2 = FUN_01225e90(lVar2 + 0x140);
  uVar3 = FUN_0121c6b0(lVar2 + 4);
  if ((uVar3 & 1) == 0) {
    uVar4 = 6;
  }
  else {
    uVar4 = 4;
  }
LAB_011361b0:
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  return;
}


