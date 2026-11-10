/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df0350; name: FUN_00df0350
 */


void FUN_00df0350(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  if (*(char *)(param_1 + 0xa0) == '\0') {
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_28);
  FUN_00c58c00(&local_30,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  if ((param_2 & 1) == 0) {
    local_48 = local_30;
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
    }
    local_50 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00e7f8a0(0x3f000000,&local_48,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    lVar1 = *(long *)(param_1 + 0x70) + 0x50;
    uVar2 = FUN_01593610(lVar1);
    if ((uVar2 & 1) == 0) goto LAB_00df04d0;
    uVar3 = 7;
  }
  else {
    local_38 = local_30;
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
    }
    local_40 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00e7f8a0(0x41700000,&local_38,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    lVar1 = *(long *)(param_1 + 0x70) + 0x50;
    uVar2 = FUN_01593610(lVar1);
    if ((uVar2 & 1) == 0) goto LAB_00df04d0;
    uVar3 = 0xd2;
  }
  FUN_00e45710(0,0,lVar1 + -0x50,uVar3,0);
LAB_00df04d0:
  *(undefined1 *)(param_1 + 0xa0) = 0;
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


