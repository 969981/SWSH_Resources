/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01574920; name: FUN_01574920
 */


ulong FUN_01574920(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  local_40 = 0;
  uStack_38 = 0;
  local_b8 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_007706a0(param_1,*(undefined8 *)(param_2 + 8),&local_b8);
  FUN_00770710(&local_b0,local_b8,0,0x80);
  local_c0 = 0;
  if ((char)local_b0 == '\0') {
    lVar3 = FUN_006e5e60();
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_c0 = lVar3;
  }
  else {
    FUN_006cf520(&local_28,*(undefined8 *)PTR_DAT_02710440,&local_b0);
    local_c0 = local_28;
  }
  dVar4 = *(double *)(param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  lVar3 = *(long *)PTR_DAT_027107a8;
  FUN_006cf0c0(&local_b0,&local_c0);
  uVar2 = FUN_008962a0((float)dVar4,lVar3 + 0x108,&local_b0,uVar1);
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
  }
  return uVar2 & 1;
}


