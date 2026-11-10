/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cc000; name: FUN_005cc000
 */


void FUN_005cc000(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02713f88 + 0x10);
  plVar2 = (long *)FUN_005bf860();
  uVar3 = (**(code **)(*plVar2 + 0x60))();
  FUN_005bf710(param_1 + 1,uVar3);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_006964c0(param_1 + 0xd,0);
  plVar2 = (long *)FUN_005bf860();
  lVar4 = (**(code **)(*plVar2 + 0x60))();
  puVar1 = PTR_DAT_02713f90;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 8;
  param_1[0x18] = 0;
  param_1[0x13] = (long)(puVar1 + 0x10);
  param_1[0x14] = lVar4;
  if (lVar4 == 0) {
    lVar4 = FUN_005bc6f0();
    param_1[0x14] = lVar4;
  }
  plVar2 = (long *)FUN_005bf860();
  lVar4 = (**(code **)(*plVar2 + 0x60))();
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = lVar4;
  param_1[0x1e] = 0;
  if (lVar4 == 0) {
    lVar4 = FUN_005bc740();
    if (lVar4 == 0) {
      lVar4 = FUN_005bc6f0();
    }
    else {
      lVar4 = FUN_005bc740();
    }
    param_1[0x1d] = lVar4;
  }
  plVar2 = (long *)FUN_005bf860();
  lVar4 = (**(code **)(*plVar2 + 0x60))();
  puVar1 = PTR_DAT_02713f98;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0x30;
  param_1[0x28] = 0;
  param_1[0x23] = (long)(puVar1 + 0x10);
  param_1[0x24] = lVar4;
  if (lVar4 == 0) {
    lVar4 = FUN_005bc6f0();
    param_1[0x24] = lVar4;
  }
  plVar2 = (long *)FUN_005bf860();
  uVar3 = (**(code **)(*plVar2 + 0x60))();
  FUN_005ecc70(param_1 + 0x2d,uVar3);
  param_1[0x3a] = 0;
  plVar2 = (long *)FUN_005bf860();
  lVar4 = (**(code **)(*plVar2 + 0x60))();
  puVar1 = PTR_DAT_02713fa0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  param_1[0x3f] = 8;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3b] = (long)(puVar1 + 0x10);
  param_1[0x3c] = lVar4;
  if (lVar4 == 0) {
    lVar4 = FUN_005bc6f0();
    param_1[0x3c] = lVar4;
  }
  FUN_006964c0(param_1 + 0x45,0);
  plVar2 = (long *)FUN_005bf860();
  lVar4 = (**(code **)(*plVar2 + 0x60))();
  puVar1 = PTR_DAT_02713fa8;
  param_1[0x4d] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x4c] = lVar4;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0x10;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4b] = (long)(puVar1 + 0x10);
  if (lVar4 == 0) {
    lVar4 = FUN_005bc6f0();
    param_1[0x4c] = lVar4;
  }
  param_1[0x55] = 0;
  DAT_029e8ff0 = param_1;
  plVar2 = (long *)FUN_005bf860();
  lVar4 = (**(code **)(*plVar2 + 0x60))();
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_005bf860();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 0x18))();
  }
  plVar2 = (long *)FUN_005bf860();
  lVar4 = (**(code **)(*plVar2 + 0x60))();
  param_1[3] = lVar4;
  param_1[0x56] = 0;
  return;
}


