/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab0de0; name: FUN_00ab0de0
 */


void FUN_00ab0de0(undefined4 param_1,long *param_2,long param_3,long *param_4,long *param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  FUN_015f5d10();
  puVar2 = PTR_DAT_02719820;
  param_2[0x10] = param_3;
  *param_2 = (long)(puVar2 + 0x10);
  param_2[9] = (long)(puVar2 + 0x60);
  param_2[10] = (long)(puVar2 + 0xa0);
  param_2[0x13] = *(long *)(param_3 + 0x38);
  param_2[0x12] = *(long *)(param_3 + 0x30);
  param_2[0x15] = param_4[1];
  param_2[0x14] = *param_4;
  param_2[0x17] = *(long *)(param_3 + 0x48);
  param_2[0x16] = *(long *)(param_3 + 0x40);
  param_2[0x19] = param_5[1];
  param_2[0x18] = *param_5;
  uVar1 = *(undefined4 *)(param_3 + 0x54);
  *(undefined4 *)((long)param_2 + 0xd4) = param_1;
  *(undefined4 *)(param_2 + 0x1a) = uVar1;
  *(undefined4 *)(param_2 + 0x1b) = param_7;
  *(undefined4 *)((long)param_2 + 0xdc) = 0;
  *(undefined4 *)(param_2 + 0x1c) = param_6;
  return;
}


