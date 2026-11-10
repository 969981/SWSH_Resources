/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00224d80; name: FUN_00224d80
 */


uint FUN_00224d80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  uint uVar2;
  undefined1 auStack_2e0 [104];
  undefined1 auStack_278 [24];
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined1 auStack_210 [224];
  undefined1 auStack_130 [104];
  float local_c8;
  float local_c4;
  float fStack_c0;
  float local_bc;
  float fStack_b8;
  float local_b4;
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
  
  local_b0 = 0x3f800000;
  uStack_a8 = 0;
  local_a0 = 0x3f800000;
  uStack_98 = 0;
  local_90 = 0x3f8000003f800000;
  uStack_88 = 0;
  local_80 = 0x3f80000000000000;
  uStack_78 = 0;
  local_70 = 0x3f80000000000000;
  local_68 = 0;
  local_bc = *(float *)(param_1 + 4);
  local_c8 = -local_bc;
  fStack_b8 = *(float *)(param_1 + 8);
  local_b4 = *(float *)(param_1 + 0xc);
  local_c4 = -fStack_b8;
  fStack_c0 = -local_b4;
  FUN_002333e0(auStack_210,(float *)(param_1 + 4));
  FUN_00233550(auStack_210,auStack_130);
  local_260 = 0x3f800000;
  uStack_258 = 0;
  local_250 = 0x3f800000;
  uStack_248 = 0;
  local_240 = 0x3f8000003f800000;
  uStack_238 = 0;
  local_220 = 0x3f80000000000000;
  local_218 = 0;
  local_230 = 0x3f80000000000000;
  uStack_228 = 0;
  bVar1 = FUN_00231c50(param_2,&local_260,auStack_278,auStack_2e0);
  uVar2 = FUN_00224eb0(auStack_130,auStack_2e0,&local_c8,auStack_278,param_3,param_4,param_5,param_7
                       ,&local_b0,&local_260,1,bVar1 & 1);
  return uVar2 & 1;
}


