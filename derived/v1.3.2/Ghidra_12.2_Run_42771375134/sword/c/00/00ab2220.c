/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab2220; name: FUN_00ab2220
 */


void FUN_00ab2220(undefined4 param_1,undefined4 param_2,long *param_3,long *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  FUN_015f5d10();
  puVar2 = PTR_DAT_02719860;
  *param_3 = (long)(PTR_DAT_02719860 + 0x10);
  param_3[9] = (long)(puVar2 + 0x60);
  param_3[10] = (long)(puVar2 + 0xa0);
  lVar3 = *param_4;
  param_3[0x10] = lVar3;
  lVar4 = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar4 = param_3[0x10];
  }
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  *(undefined4 *)(param_3 + 0x13) = param_6;
  *(undefined4 *)((long)param_3 + 0x9c) = 0;
  *(undefined4 *)(param_3 + 0x14) = param_5;
  lVar4 = FUN_01052d00(lVar4);
  uVar1 = *(undefined4 *)(lVar4 + 0x1b4);
  *(undefined4 *)(param_3 + 0x11) = *(undefined4 *)(lVar4 + 0x1b0);
  *(undefined4 *)((long)param_3 + 0x8c) = param_1;
  *(undefined4 *)(param_3 + 0x12) = uVar1;
  *(undefined4 *)((long)param_3 + 0x94) = param_2;
  return;
}


