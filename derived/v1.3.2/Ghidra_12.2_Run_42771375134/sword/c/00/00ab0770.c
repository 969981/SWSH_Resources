/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab0770; name: FUN_00ab0770
 */


void FUN_00ab0770(undefined4 param_1,undefined4 param_2,float param_3,float param_4,long *param_5,
                 undefined8 param_6,undefined8 param_7,long *param_8,long *param_9,long *param_10,
                 undefined4 param_11,undefined4 param_12)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  FUN_015f5d10();
  puVar4 = PTR_DAT_02719810;
  param_5[0x11] = 0;
  *param_5 = (long)(puVar4 + 0x10);
  param_5[9] = (long)(puVar4 + 0x60);
  param_5[10] = (long)(puVar4 + 0xa0);
  param_5[0x10] = 0;
  param_5[0x12] = 0;
  param_5[0x13] = 0;
  if ((code *)param_8[2] != (code *)0x0) {
    (*(code *)param_8[2])(param_8 + 4,param_5 + 0x14);
    lVar1 = *param_8;
    lVar2 = param_8[1];
    lVar3 = param_8[3];
    param_5[0x12] = param_8[2];
    param_5[0x13] = lVar3;
    param_5[0x10] = lVar1;
    param_5[0x11] = lVar2;
  }
  param_5[0x22] = 0;
  param_5[0x23] = 0;
  param_5[0x20] = 0;
  param_5[0x21] = 0;
  if ((code *)param_9[2] != (code *)0x0) {
    (*(code *)param_9[2])(param_9 + 4,param_5 + 0x24);
    lVar1 = *param_9;
    lVar2 = param_9[1];
    lVar3 = param_9[3];
    param_5[0x22] = param_9[2];
    param_5[0x23] = lVar3;
    param_5[0x20] = lVar1;
    param_5[0x21] = lVar2;
  }
  param_5[0x32] = 0;
  param_5[0x33] = 0;
  param_5[0x30] = 0;
  param_5[0x31] = 0;
  if ((code *)param_10[2] != (code *)0x0) {
    (*(code *)param_10[2])(param_10 + 4,param_5 + 0x34);
    lVar1 = *param_10;
    lVar2 = param_10[1];
    lVar3 = param_10[3];
    param_5[0x32] = param_10[2];
    param_5[0x33] = lVar3;
    param_5[0x30] = lVar1;
    param_5[0x31] = lVar2;
  }
  param_3 = param_3 * DAT_01d4bef8;
  param_4 = param_4 * DAT_01d4bef8;
  *(undefined4 *)(param_5 + 0x40) = param_1;
  *(undefined4 *)((long)param_5 + 0x204) = param_2;
  *(undefined4 *)((long)param_5 + 0x214) = param_11;
  *(undefined4 *)(param_5 + 0x43) = param_12;
  *(undefined4 *)(param_5 + 0x42) = 0;
  *(float *)(param_5 + 0x41) = param_3;
  *(float *)((long)param_5 + 0x20c) = param_4;
  return;
}


