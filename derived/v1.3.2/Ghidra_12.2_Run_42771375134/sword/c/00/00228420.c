/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00228420; name: FUN_00228420
 */


uint FUN_00228420(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  uint uVar2;
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
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  float local_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float local_1b0;
  float fStack_1ac;
  undefined1 auStack_1a8 [224];
  undefined1 auStack_c8 [104];
  
  FUN_002333e0(auStack_1a8,param_1 + 4);
  FUN_00233550(auStack_1a8,auStack_c8);
  fStack_1b4 = *(float *)(param_1 + 4);
  local_1b0 = *(float *)(param_1 + 8);
  fStack_1ac = *(float *)(param_1 + 0xc);
  fStack_1bc = -local_1b0;
  local_1c0 = -fStack_1b4;
  local_1b8 = -fStack_1ac;
  if ((*(float *)(param_2 + 4) == 1.0) && (*(float *)(param_2 + 8) == 1.0)) {
    bVar1 = *(float *)(param_2 + 0xc) == 1.0;
  }
  else {
    bVar1 = false;
  }
  local_210 = 0x3f800000;
  uStack_208 = 0;
  local_1d0 = 0x3f80000000000000;
  local_200 = 0x3f800000;
  uStack_1f8 = 0;
  local_1c8 = 0;
  local_1f0 = 0x3f8000003f800000;
  uStack_1e8 = 0;
  local_1e0 = 0x3f80000000000000;
  uStack_1d8 = 0;
  if (!bVar1) {
    FUN_001b0f90(&local_210,(float *)(param_2 + 4),param_2 + 0x10);
  }
  local_260 = 0x3f800000;
  uStack_258 = 0;
  local_250 = 0x3f800000;
  uStack_248 = 0;
  local_240 = 0x3f8000003f800000;
  uStack_238 = 0;
  local_220 = 0x3f80000000000000;
  local_230 = 0x3f80000000000000;
  uStack_228 = 0;
  local_218 = 0;
  uVar2 = FUN_00227e80(auStack_c8,&local_1c0,param_2,param_3,param_4,param_5,param_7,&local_260,
                       &local_210,1,bVar1);
  return uVar2 & 1;
}


