/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab0b10; name: FUN_00ab0b10
 */


void FUN_00ab0b10(undefined4 param_1,undefined1 param_2 [16],long *param_3,long param_4,
                 long *param_5,long *param_6,undefined4 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  FUN_015f5d10();
  puVar4 = PTR_DAT_02719818;
  param_3[0x10] = param_4;
  param_3[0x13] = 0;
  *param_3 = (long)(puVar4 + 0x10);
  param_3[9] = (long)(puVar4 + 0x60);
  param_3[10] = (long)(puVar4 + 0xa0);
  param_3[0x12] = 0;
  param_3[0x14] = 0;
  param_3[0x15] = 0;
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,param_3 + 0x16);
    lVar1 = *param_5;
    lVar2 = param_5[1];
    lVar3 = param_5[3];
    param_3[0x14] = param_5[2];
    param_3[0x15] = lVar3;
    param_3[0x12] = lVar1;
    param_3[0x13] = lVar2;
  }
  param_3[0x24] = 0;
  param_3[0x25] = 0;
  param_3[0x22] = 0;
  param_3[0x23] = 0;
  if ((code *)param_6[2] != (code *)0x0) {
    (*(code *)param_6[2])(param_6 + 4,param_3 + 0x26);
    lVar1 = *param_6;
    lVar2 = param_6[1];
    lVar3 = param_6[3];
    param_3[0x24] = param_6[2];
    param_3[0x25] = lVar3;
    param_3[0x22] = lVar1;
    param_3[0x23] = lVar2;
  }
  *(undefined4 *)(param_3 + 0x32) = param_1;
  *(undefined4 *)(param_3 + 0x36) = 0;
  *(undefined4 *)((long)param_3 + 0x1b4) = param_7;
  param_3[0x35] = param_2._8_8_;
  param_3[0x34] = param_2._0_8_;
  return;
}


