/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e8ce0; name: FUN_014e8ce0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014e8ce0(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long local_30;
  undefined8 local_28;
  
  lVar2 = *(long *)(param_1 + 0xa8);
  if ((*(ulong *)(lVar2 + 0x5e0) & 0xff) == 0) {
    return;
  }
  iVar3 = (int)(*(ulong *)(lVar2 + 0x5e0) >> 0x20);
  if (iVar3 == 2) {
    uVar1 = 5;
  }
  else {
    if (iVar3 != 0) goto LAB_014e8dd8;
    local_28 = FUN_01602730();
    if (*(long *)(param_1 + 0x88) == 0) {
      local_30 = 0;
      _DAT_00000084 = (undefined4)((ulong)local_28 >> 0x20);
      DAT_00000080 = 1;
      if (*(long *)(param_1 + 0x90) != 0) goto LAB_014e8d60;
LAB_014e8d9c:
      local_30 = 0;
    }
    else {
      FUN_014ddc70(&local_30);
      *(undefined4 *)(local_30 + 0x84) = local_28._4_4_;
      *(undefined1 *)(local_30 + 0x80) = 1;
      if (local_30 != 0) {
        (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
        local_30 = 0;
      }
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_014e8d9c;
LAB_014e8d60:
      FUN_014dd710(&local_30);
    }
    uVar1 = FUN_014e74b0(local_30,&local_28);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    lVar2 = *(long *)(param_1 + 0xa8);
    uVar1 = uVar1 & 1;
  }
  *(uint *)(param_1 + 0x7c) = uVar1;
  *(undefined1 *)(param_1 + 0x78) = 1;
LAB_014e8dd8:
  FUN_01602c90(lVar2);
  return;
}


