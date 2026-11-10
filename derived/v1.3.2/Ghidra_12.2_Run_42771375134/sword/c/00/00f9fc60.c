/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f9fc60; name: FUN_00f9fc60
 */


void FUN_00f9fc60(long *param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                 undefined8 param_17)

{
  undefined4 uVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar2;
  undefined4 local_100;
  undefined4 local_fc;
  long local_f8;
  int local_f0;
  long local_e8;
  int local_e0;
  undefined4 *local_d8;
  long *local_d0;
  undefined4 *local_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  lVar2 = *param_2;
  FUN_01760e60(lVar2,0,7);
  local_e8 = lVar2;
  FUN_0175f270(lVar2,0xffffffff);
  local_e0 = FUN_0175dbf0(lVar2,0xfff0b9d8);
  local_a0 = param_11;
  uStack_98 = param_12;
  local_90 = param_13;
  uStack_88 = param_14;
  uStack_a8 = param_10;
  local_80 = param_15;
  local_78 = param_16;
  local_70 = param_17;
  local_d8 = param_4;
  local_d0 = (long *)param_5;
  local_c8 = (undefined4 *)param_6;
  local_c0 = (long *)param_7;
  local_b8 = param_8;
  local_b0 = param_9;
  FUN_00f9feb0(&local_e8,extraout_x1,&local_d8);
  FUN_0175ef30(lVar2,0xfffffffe);
  local_fc = 2;
  local_100 = 1;
  lVar2 = *param_2;
  FUN_01760e60(lVar2,0,2);
  local_f8 = lVar2;
  FUN_0175f270(lVar2,0xffffffff);
  local_f0 = FUN_0175dbf0(lVar2,0xfff0b9d8);
  local_d8 = &local_fc;
  local_d0 = (long *)PTR_LAB_02722d48;
  local_c8 = &local_100;
  local_c0 = &local_e8;
  FUN_00f9e850(&local_f8,extraout_x1_00,&local_d8);
  FUN_0175ef30(lVar2,0xfffffffe);
  lVar2 = *param_2;
  FUN_01760e60(lVar2,0,1);
  *param_1 = lVar2;
  FUN_0175f270(lVar2,0xffffffff);
  uVar1 = FUN_0175dbf0(lVar2,0xfff0b9d8);
  *(undefined4 *)(param_1 + 1) = uVar1;
  local_d8 = (undefined4 *)&DAT_02161c95;
  local_d0 = &local_f8;
  FUN_00f9ea30(param_1,extraout_x1_01,&local_d8);
  FUN_0175ef30(lVar2,0xfffffffe);
  local_d8 = param_3;
  local_d0 = param_1;
  FUN_00f9eb10(param_2,extraout_x1_02,&local_d8);
  if ((local_f8 != 0) && (local_f0 != -2)) {
    FUN_0175dcd0(local_f8,0xfff0b9d8);
  }
  if ((local_e8 != 0) && (local_e0 != -2)) {
    FUN_0175dcd0(local_e8,0xfff0b9d8);
  }
  return;
}


