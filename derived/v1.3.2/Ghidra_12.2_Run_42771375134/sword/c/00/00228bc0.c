/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00228bc0; name: FUN_00228bc0
 */


uint FUN_00228bc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 float *param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  undefined1 auStack_198 [224];
  undefined1 auStack_b8 [104];
  
  FUN_002333e0(auStack_198,param_1 + 4);
  FUN_00233550(auStack_198,auStack_b8);
  fStack_19c = *param_5;
  local_1b8 = 0;
  fStack_1a4 = fStack_19c + *(float *)(param_1 + 4);
  local_1a0 = fStack_19c + *(float *)(param_1 + 8);
  fStack_19c = fStack_19c + *(float *)(param_1 + 0xc);
  local_200 = 0x3f800000;
  uStack_1f8 = 0;
  fStack_1ac = -local_1a0;
  local_1f0 = 0x3f800000;
  uStack_1e8 = 0;
  local_1b0 = -fStack_1a4;
  local_1a8 = -fStack_19c;
  local_1e0 = 0x3f8000003f800000;
  uStack_1d8 = 0;
  local_1d0 = 0x3f80000000000000;
  uStack_1c8 = 0;
  local_1c0 = 0x3f80000000000000;
  uVar1 = FUN_00228670(auStack_b8,&local_1b0,param_2,param_3,param_4,param_5,param_7,&local_200,1);
  return uVar1 & 1;
}


