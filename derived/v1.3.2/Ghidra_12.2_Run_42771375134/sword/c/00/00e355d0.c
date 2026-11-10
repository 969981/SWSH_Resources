/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e355d0; name: FUN_00e355d0
 */


void FUN_00e355d0(long param_1)

{
  void *pvVar1;
  undefined1 auStack_2f0 [148];
  undefined1 local_25c;
  undefined1 local_25b;
  undefined4 local_258;
  undefined4 local_254;
  undefined1 local_24f;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined1 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  
  *(undefined1 *)(param_1 + 0x180) = 0;
  pvVar1 = (void *)FUN_01052d00(*(undefined8 *)(param_1 + 0x2c8));
  memcpy(auStack_2f0,pvVar1,0x2c0);
  local_25c = *(undefined1 *)(param_1 + 0x1b4);
  local_25b = *(undefined1 *)(param_1 + 0x1b5);
  local_258 = *(undefined4 *)(param_1 + 0x1b8);
  local_254 = *(undefined4 *)(param_1 + 0x1bc);
  FUN_01052cc0(*(undefined8 *)(param_1 + 0x2c8),auStack_2f0);
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  pvVar1 = (void *)FUN_01052d00(*(undefined8 *)(param_1 + 0x2c8));
  memcpy(auStack_2f0,pvVar1,0x2c0);
  local_24f = *(undefined1 *)(param_1 + 0x218);
  local_24c = *(undefined4 *)(param_1 + 0x21c);
  local_248 = *(undefined4 *)(param_1 + 0x220);
  local_244 = *(undefined4 *)(param_1 + 0x224);
  local_240 = *(undefined4 *)(param_1 + 0x228);
  local_23c = *(undefined4 *)(param_1 + 0x22c);
  FUN_01052cc0(*(undefined8 *)(param_1 + 0x2c8),auStack_2f0);
  *(undefined1 *)(param_1 + 0x230) = 0;
  pvVar1 = (void *)FUN_01052d00(*(undefined8 *)(param_1 + 0x2c8));
  memcpy(auStack_2f0,pvVar1,0x2c0);
  local_238 = *(undefined1 *)(param_1 + 0x2a0);
  local_234 = *(undefined4 *)(param_1 + 0x2a4);
  local_230 = *(undefined4 *)(param_1 + 0x2a8);
  local_22c = *(undefined4 *)(param_1 + 0x2ac);
  local_228 = *(undefined4 *)(param_1 + 0x2b0);
  local_224 = *(undefined4 *)(param_1 + 0x2b4);
  local_220 = *(undefined4 *)(param_1 + 0x2b8);
  local_21c = *(undefined4 *)(param_1 + 700);
  FUN_01052cc0(*(undefined8 *)(param_1 + 0x2c8),auStack_2f0);
  return;
}


