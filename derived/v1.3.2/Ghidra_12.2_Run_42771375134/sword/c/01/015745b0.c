/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015745b0; name: FUN_015745b0
 */


undefined4 FUN_015745b0(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  local_b0 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_007706a0(param_1,*(undefined8 *)(param_2 + 8),&local_b0);
  FUN_00770710(&local_a8,local_b0,0,0x80);
  local_b8 = 0;
  if ((char)local_a8 == '\0') {
    lVar2 = FUN_006e5e60();
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_b8 = lVar2;
  }
  else {
    FUN_006cf520(&local_28,*(undefined8 *)PTR_DAT_02710440,&local_a8);
    local_b8 = local_28;
  }
  lVar2 = *(long *)PTR_DAT_027107a8;
  FUN_006cf0c0(&local_a8,&local_b8);
  uVar1 = FUN_008962c0(lVar2 + 0x108,&local_a8);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x84) + 0x348) = uVar1;
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
  }
  return uVar1;
}


