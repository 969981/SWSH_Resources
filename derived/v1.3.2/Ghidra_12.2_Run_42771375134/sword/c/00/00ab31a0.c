/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab31a0; name: FUN_00ab31a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ab31a0(long *param_1,long *param_2,long *param_3,undefined4 param_4,undefined4 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  void *__src;
  undefined1 auStack_300 [624];
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  
  FUN_015f5d10();
  puVar2 = PTR_DAT_02719888;
  *param_1 = (long)(PTR_DAT_02719888 + 0x10);
  param_1[9] = (long)(puVar2 + 0x60);
  param_1[10] = (long)(puVar2 + 0xa0);
  lVar3 = *param_2;
  param_1[0x10] = lVar3;
  lVar4 = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar4 = param_1[0x10];
  }
  lVar1 = _UNK_01d4a138;
  lVar3 = _DAT_01d4a130;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x18] = 0x3f8000003f800000;
  param_1[0x19] = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x94) = 0x300000000;
  param_1[0x22] = 0x3f8000003f800000;
  param_1[0x23] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0x300000000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x26) = param_5;
  *(undefined4 *)((long)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x27) = param_4;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = lVar1;
  param_1[0x16] = lVar3;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = lVar1;
  param_1[0x20] = lVar3;
  __src = (void *)FUN_01052d00(lVar4);
  memcpy(auStack_300,__src,0x2c0);
  param_1[0x12] = local_90;
  param_1[0x15] = local_78;
  param_1[0x16] = local_70;
  param_1[0x13] = local_88;
  param_1[0x14] = local_80;
  *(undefined4 *)(param_1 + 0x1a) = local_50;
  param_1[0x17] = local_68;
  param_1[0x18] = local_60;
  param_1[0x19] = local_58;
  param_1[0x1c] = *param_3;
  lVar4 = param_3[1];
  param_1[0x1f] = param_3[3];
  param_1[0x1d] = lVar4;
  lVar3 = param_3[5];
  lVar4 = param_3[8];
  param_1[0x23] = param_3[7];
  param_1[0x21] = lVar3;
  lVar3 = param_3[2];
  param_1[0x20] = param_3[4];
  param_1[0x1e] = lVar3;
  lVar3 = param_3[6];
  *(int *)(param_1 + 0x24) = (int)lVar4;
  param_1[0x22] = lVar3;
  return;
}


