/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab35f0; name: FUN_00ab35f0
 */


void FUN_00ab35f0(undefined4 param_1,undefined4 param_2,long *param_3,long *param_4,byte param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  void *__src;
  undefined1 auStack_310 [149];
  byte local_27b;
  undefined4 local_278;
  undefined4 local_274;
  
  FUN_015f5d10();
  puVar1 = PTR_DAT_02719890;
  *param_3 = (long)(PTR_DAT_02719890 + 0x10);
  param_3[9] = (long)(puVar1 + 0x60);
  param_3[10] = (long)(puVar1 + 0xa0);
  lVar2 = *param_4;
  param_3[0x10] = lVar2;
  lVar3 = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar3 = param_3[0x10];
  }
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  *(undefined4 *)(param_3 + 0x13) = param_7;
  *(undefined4 *)((long)param_3 + 0x9c) = 0;
  *(undefined4 *)(param_3 + 0x14) = param_6;
  __src = (void *)FUN_01052d00(lVar3);
  memcpy(auStack_310,__src,0x2c0);
  *(undefined4 *)(param_3 + 0x11) = local_278;
  *(undefined4 *)((long)param_3 + 0x8c) = param_1;
  *(undefined4 *)(param_3 + 0x12) = local_274;
  *(undefined4 *)((long)param_3 + 0x94) = param_2;
  local_27b = param_5 & 1;
  FUN_01052cc0(param_3[0x10],auStack_310);
  return;
}


