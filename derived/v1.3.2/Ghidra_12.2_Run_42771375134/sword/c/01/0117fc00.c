/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0117fc00; name: FUN_0117fc00
 */


void FUN_0117fc00(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long *plStack_b8;
  long local_a0 [2];
  long local_90;
  long *plStack_88;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)FUN_0120f230(*(undefined8 *)PTR_DAT_02710958);
  local_d8 = *puVar1;
  FUN_011807d0(&local_d0,puVar1 + 1);
  FUN_011808f0(local_a0,puVar1 + 7);
  puVar1 = (undefined8 *)FUN_01218700(&local_d8);
  puVar2 = (undefined8 *)FUN_01218710(&local_d8);
  for (; puVar1 != puVar2; puVar1 = puVar1 + 8) {
    local_70 = *puVar1;
    uStack_68 = puVar1[1];
    local_60 = puVar1[2];
    uStack_58 = puVar1[3];
    local_50 = puVar1[4];
    uStack_48 = puVar1[5];
    local_40 = puVar1[6];
    uStack_38 = puVar1[7];
    FUN_011801d0(param_1,&local_70);
  }
  if (local_a0[0] != 0) {
    (**(code **)(*plStack_88 + 0x18))(plStack_88,local_a0[0],local_90 - local_a0[0],8);
  }
  if (local_d0 != 0) {
    local_c8 = local_d0;
    (**(code **)(*plStack_b8 + 0x18))(plStack_b8,local_d0,local_c0 - local_d0,8);
  }
  return;
}


