/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00226360; name: FUN_00226360
 */


uint FUN_00226360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auStack_200 [104];
  undefined1 auStack_198 [104];
  undefined1 auStack_130 [24];
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
  
  local_68 = 0;
  local_70 = 0x3f80000000000000;
  local_c0 = 0x3f80000000000000;
  local_b8 = 0;
  local_b0 = 0x3f800000;
  uStack_a8 = 0;
  local_a0 = 0x3f800000;
  uStack_98 = 0;
  local_90 = 0x3f8000003f800000;
  uStack_88 = 0;
  local_80 = 0x3f80000000000000;
  uStack_78 = 0;
  local_100 = 0x3f800000;
  uStack_f8 = 0;
  local_f0 = 0x3f800000;
  uStack_e8 = 0;
  local_e0 = 0x3f8000003f800000;
  uStack_d8 = 0;
  local_d0 = 0x3f80000000000000;
  uStack_c8 = 0;
  bVar1 = FUN_00231c50(param_1,&local_b0,auStack_118,auStack_198);
  bVar2 = FUN_00231c50(param_2,&local_100,auStack_130,auStack_200);
  uVar3 = FUN_00224eb0(auStack_198,auStack_200,auStack_118,auStack_130,param_3,param_4,param_5,
                       param_7,&local_b0,&local_100,bVar1 & 1,bVar2 & 1);
  return uVar3 & 1;
}


