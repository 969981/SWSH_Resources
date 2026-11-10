/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab0610; name: FUN_00ab0610
 */


void FUN_00ab0610(undefined4 param_1,undefined4 param_2,long *param_3,long *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  FUN_015f5d10();
  puVar4 = PTR_DAT_02719808;
  param_3[0x11] = 0;
  *param_3 = (long)(puVar4 + 0x10);
  param_3[9] = (long)(puVar4 + 0x60);
  param_3[10] = (long)(puVar4 + 0xa0);
  param_3[0x10] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,param_3 + 0x14);
    lVar1 = *param_4;
    lVar2 = param_4[1];
    lVar3 = param_4[3];
    param_3[0x12] = param_4[2];
    param_3[0x13] = lVar3;
    param_3[0x10] = lVar1;
    param_3[0x11] = lVar2;
  }
  *(undefined4 *)(param_3 + 0x20) = param_1;
  *(undefined4 *)((long)param_3 + 0x104) = param_2;
  *(undefined4 *)(param_3 + 0x21) = param_6;
  *(undefined4 *)((long)param_3 + 0x10c) = param_5;
  *(undefined4 *)(param_3 + 0x22) = 0;
  return;
}


