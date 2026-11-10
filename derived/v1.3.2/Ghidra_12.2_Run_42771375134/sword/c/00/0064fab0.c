/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0064fab0; name: FUN_0064fab0
 */


void FUN_0064fab0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02714aa0 + 0x10);
  FUN_005bf710(param_1 + 1);
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  plVar3 = (long *)FUN_005cbff0();
  lVar4 = (**(code **)(*plVar3 + 0x30))();
  puVar2 = PTR_DAT_02714aa8;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 8;
  param_1[0xc] = 0;
  param_1[7] = (long)puVar1;
  param_1[8] = lVar4;
  if (lVar4 == 0) {
    lVar4 = FUN_005bc6f0();
    param_1[8] = lVar4;
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  plVar3 = (long *)FUN_005cbff0();
  lVar4 = (**(code **)(*plVar3 + 0x30))();
  param_1[0x12] = (long)puVar1;
  param_1[0x13] = lVar4;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 8;
  param_1[0x17] = 0;
  if (lVar4 == 0) {
    lVar4 = FUN_005bc6f0();
    param_1[0x13] = lVar4;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  plVar3 = (long *)FUN_005cbff0();
  lVar4 = (**(code **)(*plVar3 + 0x30))();
  puVar2 = puVar2 + 0x10;
  param_1[0x1d] = (long)puVar2;
  param_1[0x1e] = lVar4;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 8;
  param_1[0x22] = 0;
  if (lVar4 == 0) {
    lVar4 = FUN_005bc6f0();
    param_1[0x1e] = lVar4;
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  plVar3 = (long *)FUN_005cbff0();
  lVar4 = (**(code **)(*plVar3 + 0x30))();
  param_1[0x28] = (long)puVar2;
  param_1[0x29] = lVar4;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 8;
  param_1[0x2d] = 0;
  if (lVar4 == 0) {
    lVar4 = FUN_005bc6f0();
    param_1[0x29] = lVar4;
  }
  param_1[0x32] = 0;
  return;
}


