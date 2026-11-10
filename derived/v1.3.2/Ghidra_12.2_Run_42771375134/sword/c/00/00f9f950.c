/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f9f950; name: FUN_00f9f950
 */


void FUN_00f9f950(long *param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined4 uVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar2;
  undefined4 local_b8;
  undefined4 local_b4;
  long local_b0;
  int local_a8;
  long local_a0;
  int local_98;
  undefined4 *local_90;
  long *local_88;
  undefined4 *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar2 = *param_2;
  FUN_01760e60(lVar2,0,3);
  local_a0 = lVar2;
  FUN_0175f270(lVar2,0xffffffff);
  local_98 = FUN_0175dbf0(lVar2,0xfff0b9d8);
  local_90 = param_4;
  local_88 = (long *)param_5;
  local_80 = (undefined4 *)param_6;
  plStack_78 = (long *)param_7;
  local_70 = param_8;
  uStack_68 = param_9;
  FUN_00f9fb50(&local_a0,extraout_x1,&local_90);
  FUN_0175ef30(lVar2,0xfffffffe);
  local_b4 = 2;
  local_b8 = 1;
  lVar2 = *param_2;
  FUN_01760e60(lVar2,0,2);
  local_b0 = lVar2;
  FUN_0175f270(lVar2,0xffffffff);
  local_a8 = FUN_0175dbf0(lVar2,0xfff0b9d8);
  local_90 = &local_b4;
  local_88 = (long *)PTR_LAB_02722d48;
  local_80 = &local_b8;
  plStack_78 = &local_a0;
  FUN_00f9e850(&local_b0,extraout_x1_00,&local_90);
  FUN_0175ef30(lVar2,0xfffffffe);
  lVar2 = *param_2;
  FUN_01760e60(lVar2,0,1);
  *param_1 = lVar2;
  FUN_0175f270(lVar2,0xffffffff);
  uVar1 = FUN_0175dbf0(lVar2,0xfff0b9d8);
  *(undefined4 *)(param_1 + 1) = uVar1;
  local_90 = (undefined4 *)&DAT_02161c95;
  local_88 = &local_b0;
  FUN_00f9ea30(param_1,extraout_x1_01,&local_90);
  FUN_0175ef30(lVar2,0xfffffffe);
  local_90 = param_3;
  local_88 = param_1;
  FUN_00f9eb10(param_2,extraout_x1_02,&local_90);
  if ((local_b0 != 0) && (local_a8 != -2)) {
    FUN_0175dcd0(local_b0,0xfff0b9d8);
  }
  if ((local_a0 != 0) && (local_98 != -2)) {
    FUN_0175dcd0(local_a0,0xfff0b9d8);
  }
  return;
}


