/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00227d50; name: FUN_00227d50
 */


uint FUN_00227d50(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auStack_180 [104];
  undefined1 auStack_118 [24];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  
  if ((*(float *)(param_2 + 4) == 1.0) && (*(float *)(param_2 + 8) == 1.0)) {
    bVar1 = *(float *)(param_2 + 0xc) == 1.0;
  }
  else {
    bVar1 = false;
  }
  local_b0 = 0x3f800000;
  uStack_a8 = 0;
  local_70 = 0x3f80000000000000;
  local_a0 = 0x3f800000;
  uStack_98 = 0;
  local_68 = 0;
  local_90 = 0x3f8000003f800000;
  uStack_88 = 0;
  local_80 = 0x3f80000000000000;
  uStack_78 = 0;
  if (!bVar1) {
    FUN_001b0f90(&local_b0,(float *)(param_2 + 4),param_2 + 0x10);
  }
  local_c0 = 0x3f80000000000000;
  local_100 = 0x3f800000;
  uStack_f8 = 0;
  local_b8 = 0;
  local_f0 = 0x3f800000;
  uStack_e8 = 0;
  local_e0 = 0x3f8000003f800000;
  uStack_d8 = 0;
  local_d0 = 0x3f80000000000000;
  uStack_c8 = 0;
  bVar2 = FUN_00231c50(param_1,&local_100,auStack_118,auStack_180);
  uVar3 = FUN_00227e80(auStack_180,auStack_118,param_2,param_3,param_4,param_5,param_7,&local_100,
                       &local_b0,bVar2 & 1,bVar1);
  return uVar3 & 1;
}


