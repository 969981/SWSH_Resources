/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab2b90; name: FUN_00ab2b90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ab2b90(long *param_1,long *param_2,long *param_3,undefined4 param_4,undefined4 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  void *__src;
  undefined1 auStack_300 [512];
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  
  FUN_015f5d10();
  puVar2 = PTR_DAT_02719880;
  *param_1 = (long)(PTR_DAT_02719880 + 0x10);
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
  *(undefined4 *)((long)param_1 + 0x94) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x41700000;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x1a] = 0x3f0000003f800000;
  param_1[0x15] = lVar1;
  param_1[0x14] = lVar3;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x1e] = 0x3f00000041700000;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x28] = 0x3f0000003f800000;
  *(undefined4 *)((long)param_1 + 0x164) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x2e) = param_5;
  *(undefined4 *)((long)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2f) = param_4;
  param_1[0x18] = 0x3e8000003f800000;
  param_1[0x19] = 0x3f8000003f800000;
  param_1[0x1d] = lVar1;
  param_1[0x1c] = lVar3;
  param_1[0x26] = 0x3e8000003f800000;
  param_1[0x27] = 0x3f8000003f800000;
  param_1[0x2b] = lVar1;
  param_1[0x2a] = lVar3;
  param_1[0x23] = lVar1;
  param_1[0x22] = lVar3;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  __src = (void *)FUN_01052d00(lVar4);
  memcpy(auStack_300,__src,0x2c0);
  param_1[0x1d] = local_a8;
  param_1[0x1e] = local_a0;
  param_1[0x12] = local_100;
  param_1[0x15] = local_e8;
  param_1[0x16] = local_e0;
  param_1[0x13] = local_f8;
  param_1[0x14] = local_f0;
  param_1[0x19] = local_c8;
  param_1[0x1a] = local_c0;
  param_1[0x17] = local_d8;
  param_1[0x18] = local_d0;
  param_1[0x1b] = local_b8;
  param_1[0x1c] = local_b0;
  lVar4 = param_3[1];
  param_1[0x23] = param_3[3];
  param_1[0x21] = lVar4;
  lVar4 = param_3[5];
  param_1[0x27] = param_3[7];
  param_1[0x25] = lVar4;
  lVar4 = param_3[9];
  param_1[0x2b] = param_3[0xb];
  param_1[0x29] = lVar4;
  param_1[0x20] = *param_3;
  lVar4 = param_3[2];
  param_1[0x24] = param_3[4];
  param_1[0x22] = lVar4;
  lVar4 = param_3[6];
  param_1[0x28] = param_3[8];
  param_1[0x26] = lVar4;
  lVar4 = param_3[10];
  param_1[0x2c] = param_3[0xc];
  param_1[0x2a] = lVar4;
  return;
}


