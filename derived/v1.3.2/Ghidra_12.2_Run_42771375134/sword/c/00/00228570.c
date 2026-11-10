/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00228570; name: FUN_00228570
 */


uint FUN_00228570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 float *param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  uint uVar2;
  float fVar3;
  undefined1 auStack_110 [104];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  local_90 = 0x3f800000;
  uStack_88 = 0;
  local_80 = 0x3f800000;
  uStack_78 = 0;
  local_70 = 0x3f8000003f800000;
  uStack_68 = 0;
  local_50 = 0x3f80000000000000;
  local_60 = 0x3f80000000000000;
  uStack_58 = 0;
  local_48 = 0;
  bVar1 = FUN_00231c50(param_1,&local_90,&local_a8,auStack_110);
  fVar3 = *param_5;
  local_a8 = local_a8 - fVar3;
  local_a4 = local_a4 - fVar3;
  local_a0 = local_a0 - fVar3;
  local_9c = fVar3 + local_9c;
  local_98 = fVar3 + local_98;
  local_94 = fVar3 + local_94;
  uVar2 = FUN_00228670(auStack_110,&local_a8,param_2,param_3,param_4,param_5,param_7,&local_90,
                       bVar1 & 1);
  return uVar2 & 1;
}


