/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0113c740; name: FUN_0113c740
 */


void FUN_0113c740(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  long local_38;
  long local_30;
  long local_28;
  
  if (param_2 == 2) {
    uVar3 = 9;
  }
  else if (param_2 == 1) {
    uVar3 = 8;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    if (*(long *)(param_1 + 0xa8) == 0) {
      local_28 = 0;
    }
    else {
      FUN_011303e0(&local_28);
    }
    lVar1 = local_28;
    FUN_01128420(&local_38,*(undefined8 *)(param_1 + 0x80));
    local_30 = *(long *)(local_38 + 0x3a0);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
    }
    FUN_011b9fe0(lVar1,&local_30);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x50) + 0x18))();
      local_28 = 0;
    }
    if (*(long *)(param_1 + 0x80) == 0) {
      local_28 = 0;
      FUN_011295f0(0x3b8);
    }
    else {
      FUN_01128420(&local_28);
      FUN_011295f0(local_28 + 0x3b8);
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    lVar1 = *(long *)(param_1 + 0x370);
    if (*(long *)(lVar1 + 0xba0) != 0) {
      uVar2 = FUN_0103d280(*(long *)(lVar1 + 0xba0));
      if ((uVar2 & 1) != 0) {
        uVar3 = 2;
        goto LAB_0113c8a4;
      }
      lVar1 = *(long *)(param_1 + 0x370);
    }
    FUN_010364c0(lVar1,0);
    FUN_00ffa3d0(*(long *)(param_1 + 0x370),0);
    uVar3 = 1;
  }
LAB_0113c8a4:
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  return;
}


