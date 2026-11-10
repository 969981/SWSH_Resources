/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0065c710; name: FUN_0065c710
 */


void FUN_0065c710(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_02714c40 + 0x118;
  *param_1 = (long)(PTR_DAT_02714c40 + 0x10);
  param_1[1] = (long)puVar1;
  plVar2 = (long *)FUN_005cbff0();
  uVar3 = (**(code **)(*plVar2 + 0x30))();
  FUN_005bf710(param_1 + 2,uVar3);
  param_1[4] = 0;
  param_1[5] = 0;
  plVar2 = (long *)FUN_005cbff0();
  lVar4 = (**(code **)(*plVar2 + 0x30))();
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = lVar4;
  param_1[7] = 0;
  if (lVar4 == 0) {
    lVar4 = FUN_005bc740();
    if (lVar4 == 0) {
      lVar4 = FUN_005bc6f0();
    }
    else {
      lVar4 = FUN_005bc740();
    }
    param_1[6] = lVar4;
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 100) = 3;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return;
}


